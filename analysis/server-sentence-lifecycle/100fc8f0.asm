
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fc8f0 <.text+0xfb8f0>:
100fc8f0:	55                   	push   ebp
100fc8f1:	8b ec                	mov    ebp,esp
100fc8f3:	51                   	push   ecx
100fc8f4:	56                   	push   esi
100fc8f5:	68 5c ea 1d 10       	push   0x101dea5c
100fc8fa:	be 64 00 00 00       	mov    esi,0x64
100fc8ff:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100fc905:	6a 01                	push   0x1
100fc907:	6a 00                	push   0x0
100fc909:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100fc90c:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100fc912:	83 c4 0c             	add    esp,0xc
100fc915:	85 c0                	test   eax,eax
100fc917:	74 10                	je     0x100fc929
100fc919:	6a 06                	push   0x6
100fc91b:	6a 00                	push   0x0
100fc91d:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100fc923:	83 c4 08             	add    esp,0x8
100fc926:	8d 70 62             	lea    esi,[eax+0x62]
100fc929:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
100fc92e:	0f 5a c1             	cvtps2pd xmm0,xmm1
100fc931:	66 0f 2f 05 f0 1d 1a 	comisd xmm0,QWORD PTR ds:0x101a1df0
100fc938:	10 
100fc939:	76 21                	jbe    0x100fc95c
100fc93b:	56                   	push   esi
100fc93c:	6a 00                	push   0x0
100fc93e:	83 ec 08             	sub    esp,0x8
100fc941:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100fc948:	3f 
100fc949:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100fc94e:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100fc951:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100fc954:	e8 67 1a 00 00       	call   0x100fe3c0
100fc959:	83 c4 18             	add    esp,0x18
100fc95c:	5e                   	pop    esi
100fc95d:	8b e5                	mov    esp,ebp
100fc95f:	5d                   	pop    ebp
100fc960:	c3                   	ret
