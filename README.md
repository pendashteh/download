# download
Download the full website and keep track of changes over time.

## Usecase
```
$ download https://mywebsite.com/blog
```

## All commands
```
$ download [single] url
# downloads a (single or) full copy of the given url in the downloads directory (~/downloads/data)

$ download git [git commands]
# runs a git command in the downloads directory
# for example:
$ download git log --name-only
$ download git diff HEAD~1

$ download open
# opens the downloads directory

$ download serve
# starts a server to help you browse the downloads directory on a browser
```

