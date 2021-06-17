#!/usr/bin/env bash

function app_datadir() {
    echo "$HOME/download/data"
}

function app_boot() {
  app_ensure_datadir
}

function app_ensure_datadir {
  local datadir=$(app_datadir)
  export GIT_WORK_TREE=$datadir
  export GIT_DIR=$datadir/.git
  [ -d $GIT_DIR ] && return
  mkdir -p $datadir
  pushd $datadir
  git init
  git commit --allow-empty -m'Genesis commit.'
  popd
}
