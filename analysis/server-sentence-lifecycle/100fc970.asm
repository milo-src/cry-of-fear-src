
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fc970 <.text+0xfb970>:
100fc970:	55                   	push   ebp
100fc971:	8b ec                	mov    ebp,esp
100fc973:	51                   	push   ecx
100fc974:	56                   	push   esi
100fc975:	68 5c ea 1d 10       	push   0x101dea5c
100fc97a:	be 64 00 00 00       	mov    esi,0x64
100fc97f:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100fc985:	6a 01                	push   0x1
100fc987:	6a 00                	push   0x0
100fc989:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100fc98c:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100fc992:	83 c4 0c             	add    esp,0xc
100fc995:	85 c0                	test   eax,eax
100fc997:	74 10                	je     0x100fc9a9
100fc999:	6a 06                	push   0x6
100fc99b:	6a 00                	push   0x0
100fc99d:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100fc9a3:	83 c4 08             	add    esp,0x8
100fc9a6:	8d 70 62             	lea    esi,[eax+0x62]
100fc9a9:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
100fc9ae:	0f 5a c1             	cvtps2pd xmm0,xmm1
100fc9b1:	66 0f 2f 05 f0 1d 1a 	comisd xmm0,QWORD PTR ds:0x101a1df0
100fc9b8:	10 
100fc9b9:	76 23                	jbe    0x100fc9de
100fc9bb:	6a ff                	push   0xffffffff
100fc9bd:	56                   	push   esi
100fc9be:	6a 00                	push   0x0
100fc9c0:	83 ec 08             	sub    esp,0x8
100fc9c3:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100fc9ca:	3f 
100fc9cb:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100fc9d0:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100fc9d3:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100fc9d6:	e8 75 1a 00 00       	call   0x100fe450
100fc9db:	83 c4 1c             	add    esp,0x1c
100fc9de:	5e                   	pop    esi
100fc9df:	8b e5                	mov    esp,ebp
100fc9e1:	5d                   	pop    ebp
100fc9e2:	c3                   	ret
