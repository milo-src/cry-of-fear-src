
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100be5b0 <.text+0xbd5b0>:
100be5b0:	55                   	push   ebp
100be5b1:	8b ec                	mov    ebp,esp
100be5b3:	51                   	push   ecx
100be5b4:	e8 67 07 00 00       	call   0x100bed20
100be5b9:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100be5bc:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100be5c1:	33 c0                	xor    eax,eax
100be5c3:	0f 54 05 80 1f 1a 10 	andps  xmm0,XMMWORD PTR ds:0x101a1f80
100be5ca:	0f 5a c8             	cvtps2pd xmm1,xmm0
100be5cd:	f2 0f 10 05 b0 54 1d 	movsd  xmm0,QWORD PTR ds:0x101d54b0
100be5d4:	10 
100be5d5:	66 0f 2f c1          	comisd xmm0,xmm1
100be5d9:	0f 93 c0             	setae  al
100be5dc:	8b e5                	mov    esp,ebp
100be5de:	5d                   	pop    ebp
100be5df:	c3                   	ret
