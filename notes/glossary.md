# Glossary — the words from Week 0

Drop this in `notes/glossary.md`. Add to it as you meet new words.

## The two computers

| Word | Meaning |
|---|---|
| **WSL** | Windows Subsystem for Linux. A real Ubuntu running inside Windows. Separate filesystem from Windows — a file in one is not really in the other. |
| **Terminal** | The black text window. |
| **Shell** / **bash** | The program inside the terminal that reads your commands and runs them. |

## Files and places

| Word | Meaning |
|---|---|
| **Directory** | A folder. Unix says "directory"; same thing. |
| **Path** | A file's address. `/home/hpsh/embedded-journey/README.md` |
| **`~`** (tilde) | Your home directory. Shorthand for `/home/hpsh`. |
| **`.`** | The directory you're currently in. |
| **`..`** | The directory one level up. |
| **`/`** | The very top of the filesystem (the "root"). Also the separator between directory names. |
| **Hidden file** | A file whose name starts with a dot — `.gitignore`, `.ssh`. `ls` won't show them; `ls -a` will. |
| **Binary** / **executable** | The compiled program — machine code the CPU runs. `check` was one. |
| **Source** | The human-readable code you wrote. `check.c`. |

## Commands you used

| Command | What it does |
|---|---|
| `pwd` | Print working directory — "where am I?" |
| `cd` | Change directory — move somewhere. |
| `ls` | List what's here. `ls -la` shows hidden files and permissions. |
| `mkdir` | Make a directory. `-p` means "make parent directories too if needed". |
| `cat` | Print a file's contents to the screen. |
| `rm` | Remove (delete). No undo, no recycle bin. |
| `nano` | A simple text editor that runs inside the terminal. `Ctrl+O` then Enter saves; `Ctrl+X` exits. |
| `sudo` | "Run this as administrator." |
| `apt` | Ubuntu's software installer. |
| `man` | Read the manual for a command. `man ls` |
| `gcc` | The C compiler — turns your `.c` source into a binary. |
| `./program` | Run a program in the current directory. The `./` means "right here". |

## Git and GitHub — not the same thing

| Word | Meaning |
|---|---|
| **git** | Version-control software running **on your laptop**. Tracks every version of your files. |
| **GitHub** | A **website** that hosts git repositories. You could use git forever without GitHub. |
| **Repository** (repo) | A project folder that git is tracking. Just a folder with a hidden `.git` directory inside recording every version. |
| **`git init`** | Turn a plain folder into a repository. |
| **Stage** / **`git add`** | Mark files to be included in the next snapshot. |
| **Commit** | A saved snapshot of your project, with a message describing it. Permanent. |
| **`git status`** | "What's changed, and what's staged?" — read this before every commit. |
| **Push** | Upload your commits to GitHub. |
| **Remote** | A copy of your repo somewhere else. |
| **`origin`** | The default nickname for your GitHub copy. Just a name. |
| **Branch** / **`main`** | A line of development. You'll use only `main` for a long time. |
| **`.gitignore`** | A list of files git should pretend don't exist — build output, huge PDFs. |

## SSH and keys

| Word | Meaning |
|---|---|
| **SSH** | Secure Shell — a way to prove who you are to another computer without sending a password. |
| **Key pair** | Two matching files. `id_ed25519` is **private** — never share it. `id_ed25519.pub` is **public** — you give it away. |
| **Passphrase** | The password that unlocks your private key file. Nothing appears on screen as you type it. |
| **`known_hosts`** | A record of servers you've confirmed you trust. Written the first time you typed `yes`. |
| **`ssh -T git@github.com`** | "Prove to GitHub that I'm me." Success prints your username. |
| **Permission denied (publickey)** | GitHub doesn't recognise your key — either it isn't registered there, or ssh can't find it. |

## Compiler words you'll meet soon

| Word | Meaning |
|---|---|
| **Compile** | Turn C source into machine code. |
| **Link** | Join compiled pieces into one runnable program. |
| **`-Wall -Wextra`** | "Tell me about everything suspicious." Always use these. |
| **`-std=c17`** | "Compile against the 2017 version of the C language." |
| **`-o name`** | "Call the output `name`." |
