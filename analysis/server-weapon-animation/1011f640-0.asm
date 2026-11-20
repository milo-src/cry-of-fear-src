
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011f640 <.text+0x11e640>:
1011f640:	55                   	push   ebp
1011f641:	8b ec                	mov    ebp,esp
1011f643:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1011f646:	85 c0                	test   eax,eax
1011f648:	74 2b                	je     0x1011f675
1011f64a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011f64d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011f653:	6a 00                	push   0x0
1011f655:	ff 35 f8 65 22 10    	push   DWORD PTR ds:0x102265f8
1011f65b:	6a 01                	push   0x1
1011f65d:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011f663:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011f666:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011f66c:	83 c4 14             	add    esp,0x14
1011f66f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011f675:	5d                   	pop    ebp
1011f676:	c2 08 00             	ret    0x8
