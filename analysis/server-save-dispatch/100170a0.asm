
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100170a0 <.text+0x160a0>:
100170a0:	55                   	push   ebp
100170a1:	8b ec                	mov    ebp,esp
100170a3:	6a ff                	push   0xffffffff
100170a5:	68 4d d2 19 10       	push   0x1019d24d
100170aa:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100170b0:	50                   	push   eax
100170b1:	83 ec 0c             	sub    esp,0xc
100170b4:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100170b9:	33 c5                	xor    eax,ebp
100170bb:	50                   	push   eax
100170bc:	8d 45 f4             	lea    eax,[ebp-0xc]
100170bf:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100170c5:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100170c8:	8d 4d e8             	lea    ecx,[ebp-0x18]
100170cb:	e8 50 ef 0f 00       	call   0x10116020
100170d0:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [ebp-0x14],0x0
100170d7:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
100170de:	ff 75 18             	push   DWORD PTR [ebp+0x18]
100170e1:	8d 4d e8             	lea    ecx,[ebp-0x18]
100170e4:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100170eb:	ff 75 14             	push   DWORD PTR [ebp+0x14]
100170ee:	ff 75 10             	push   DWORD PTR [ebp+0x10]
100170f1:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100170f4:	e8 17 ff 0f 00       	call   0x10117010
100170f9:	8d 4d e8             	lea    ecx,[ebp-0x18]
100170fc:	e8 7f ef 0f 00       	call   0x10116080
10017101:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10017104:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1001710b:	59                   	pop    ecx
1001710c:	8b e5                	mov    esp,ebp
1001710e:	5d                   	pop    ebp
1001710f:	c3                   	ret
