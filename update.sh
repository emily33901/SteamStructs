#!/bin/bash

pushd `dirname $0`
WD=`pwd`

# Remove existing files
rm *.h

pushd ../SteamTracking

# update from upstream
PULL_RESULT=$(git pull)

if [ "$PULL_RESULT" = "Already up-to-date." ]; then
    echo "Already up-to-date."
    exit
fi

# copy structs over
cd Structs
cp *.h $WD

popd

# push to git
# (copied from steamtracking)
git add -A
git commit -a -m "$(git status --porcelain | wc -l) files | $(git status --porcelain | sed '{:q;N;s/\n/, /g;t q}' | sed 's/^ *//g')"
git push -u origin master

popd
