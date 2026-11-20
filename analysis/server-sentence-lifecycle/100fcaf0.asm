
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fcaf0 <.text+0xfbaf0>:
100fcaf0:	55                   	push   ebp
100fcaf1:	8b ec                	mov    ebp,esp
100fcaf3:	51                   	push   ecx
100fcaf4:	56                   	push   esi
100fcaf5:	68 5c ea 1d 10       	push   0x101dea5c
100fcafa:	be 64 00 00 00       	mov    esi,0x64
100fcaff:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100fcb05:	6a 01                	push   0x1
100fcb07:	6a 00                	push   0x0
100fcb09:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100fcb0c:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100fcb12:	83 c4 0c             	add    esp,0xc
100fcb15:	85 c0                	test   eax,eax
100fcb17:	74 10                	je     0x100fcb29
100fcb19:	6a 06                	push   0x6
100fcb1b:	6a 00                	push   0x0
100fcb1d:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100fcb23:	83 c4 08             	add    esp,0x8
100fcb26:	8d 70 62             	lea    esi,[eax+0x62]
100fcb29:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
100fcb2e:	0f 5a c1             	cvtps2pd xmm0,xmm1
100fcb31:	66 0f 2f 05 f0 1d 1a 	comisd xmm0,QWORD PTR ds:0x101a1df0
100fcb38:	10 
100fcb39:	76 23                	jbe    0x100fcb5e
100fcb3b:	56                   	push   esi
100fcb3c:	6a 00                	push   0x0
100fcb3e:	83 ec 08             	sub    esp,0x8
100fcb41:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100fcb48:	3f 
100fcb49:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100fcb4e:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100fcb51:	6a 06                	push   0x6
100fcb53:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100fcb56:	e8 95 fe ff ff       	call   0x100fc9f0
100fcb5b:	83 c4 1c             	add    esp,0x1c
100fcb5e:	5e                   	pop    esi
100fcb5f:	8b e5                	mov    esp,ebp
100fcb61:	5d                   	pop    ebp
100fcb62:	c3                   	ret
