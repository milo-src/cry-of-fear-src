
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fc6c0 <.text+0xfb6c0>:
100fc6c0:	55                   	push   ebp
100fc6c1:	8b ec                	mov    ebp,esp
100fc6c3:	83 ec 44             	sub    esp,0x44
100fc6c6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100fc6cb:	33 c5                	xor    eax,ebp
100fc6cd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fc6d0:	ff 35 28 67 22 10    	push   DWORD PTR ds:0x10226728
100fc6d6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100fc6d9:	50                   	push   eax
100fc6da:	8d 45 bc             	lea    eax,[ebp-0x44]
100fc6dd:	68 a8 e4 1d 10       	push   0x101de4a8
100fc6e2:	50                   	push   eax
100fc6e3:	e8 78 2a f2 ff       	call   0x1001f160
100fc6e8:	8d 45 bc             	lea    eax,[ebp-0x44]
100fc6eb:	50                   	push   eax
100fc6ec:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100fc6f2:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fc6f5:	83 c4 14             	add    esp,0x14
100fc6f8:	33 cd                	xor    ecx,ebp
100fc6fa:	e8 b4 14 04 00       	call   0x1013dbb3
100fc6ff:	8b e5                	mov    esp,ebp
100fc701:	5d                   	pop    ebp
100fc702:	c3                   	ret
