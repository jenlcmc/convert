# Units Convert Calculator
- A simple calculator that will let user chooses between 5 different units to convert.
- User will have multiple options and menus to chooses
- Some of the units available include:
 - Height
 - Mass/Weight
 - Numbers System (Decimal, hexadecimal, bianry)
 - Roman Number System
 - Temperature (Celius, Kelvin, Farenheit)

## About clonning

- You can clone a repository from GitHub to your local computer to make it easier to fix merge conflicts, add or remove files, and push larger commits. 
- When you clone a repository, you copy the repository from GitHub to your local machine.
- Cloning a repository pulls down a full copy of all the repository data that GitHub has at that point in time, including all versions of every file and folder for the project. 
- You can push your changes to the remote repository on GitHub, or pull other people's changes from GitHub. For more information, see "Using Git".
- You can clone your existing repository or clone another person's existing repository to contribute to a project.

## To clone 

- Open Terminal.
- Change the current working directory to the location where you want the cloned directory.

```
$ git clone https://github.com/jenlcmc/convert.git
```

- Press Enter to create your local clone.
- It shoud kind of look like under example except the https is different

```
$ git clone https://github.com/YOUR-USERNAME/YOUR-REPOSITORY
> Cloning into `Spoon-Knife`...
> remote: Counting objects: 10, done.
> remote: Compressing objects: 100% (8/8), done.
> remove: Total 10 (delta 1), reused 10 (delta 1)
> Unpacking objects: 100% (10/10), done.
```

## Requirements

- gcc compiler
- C++ 11 and above

## To compile the files
```
make
```

The result will be the **game** file 

## To run the file
```
./convert
```

## To remove all the .o and execute files
```
make clean
```

## Remove VSCode folers

.vscode folders are used for running and debugging within VS Code text editor

.vscode folder may be hidden in Unix like system but vissible on Windows OS to find remove from terminal/powershell:

```
ls -la //.vscode folder should be visible

rm -rf .vscode
```

## Upcoming function
- Add more units (physics and maths)

## Notes
- If there are any errors or trouble with run the program, please make a pull request
