
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10120730 <.text+0x11f730>:
10120730:	55                   	push   ebp
10120731:	8b ec                	mov    ebp,esp
10120733:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10120736:	e8 35 00 00 00       	call   0x10120770
1012073b:	85 c0                	test   eax,eax
1012073d:	74 20                	je     0x1012075f
1012073f:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10120745:	8d 50 40             	lea    edx,[eax+0x40]
10120748:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
1012074e:	03 4d 0c             	add    ecx,DWORD PTR [ebp+0xc]
10120751:	8a 01                	mov    al,BYTE PTR [ecx]
10120753:	8d 49 01             	lea    ecx,[ecx+0x1]
10120756:	88 02                	mov    BYTE PTR [edx],al
10120758:	8d 52 01             	lea    edx,[edx+0x1]
1012075b:	84 c0                	test   al,al
1012075d:	75 f2                	jne    0x10120751
1012075f:	5d                   	pop    ebp
10120760:	c2 08 00             	ret    0x8
