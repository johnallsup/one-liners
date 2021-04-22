---
title: Bash scripts for udisks
---
These two (plus one helper) scripts are shorthands for mounting/unmounting removable drives.

They allow e.g.
```
udm a1 b2
```
as shorthand for
```
udisksctl mount -b /dev/sda1 ; udisksctl mount -b /dev/sdb2
```
and use /guessbd/ to make a reasonable guess as to what block device is intended.

Then for unmounting
```
udu a1
udu /mount/username/volname
```
will work (where it will figure out which block device is mounted at /mount/username/volname for you).

Finally /guessbd/ does the work of turning a shorthand or a mountpoint into a block device.
