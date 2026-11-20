
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bb290 <.text+0xba290>:
100bb290:	55                   	push   ebp
100bb291:	8b ec                	mov    ebp,esp
100bb293:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100bb296:	e8 c5 f1 ff ff       	call   0x100ba460
100bb29b:	85 c0                	test   eax,eax
100bb29d:	74 0e                	je     0x100bb2ad
100bb29f:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100bb2a5:	8b 01                	mov    eax,DWORD PTR [ecx]
100bb2a7:	ff 90 f4 00 00 00    	call   DWORD PTR [eax+0xf4]
100bb2ad:	5d                   	pop    ebp
100bb2ae:	c2 10 00             	ret    0x10
