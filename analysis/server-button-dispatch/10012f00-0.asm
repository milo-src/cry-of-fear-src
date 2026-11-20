
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012f00 <.text+0x11f00>:
10012f00:	55                   	push   ebp
10012f01:	8b ec                	mov    ebp,esp
10012f03:	83 ec 08             	sub    esp,0x8
10012f06:	56                   	push   esi
10012f07:	57                   	push   edi
10012f08:	83 ec 08             	sub    esp,0x8
10012f0b:	8b f9                	mov    edi,ecx
10012f0d:	8b 37                	mov    esi,DWORD PTR [edi]
10012f0f:	c7 44 24 04 00 00 c0 	mov    DWORD PTR [esp+0x4],0x3fc00000
10012f16:	3f 
10012f17:	c7 47 78 00 2f 01 10 	mov    DWORD PTR [edi+0x78],0x10012f00
10012f1e:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10012f25:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10012f2b:	dd 5d f8             	fstp   QWORD PTR [ebp-0x8]
10012f2e:	f2 0f 10 45 f8       	movsd  xmm0,QWORD PTR [ebp-0x8]
10012f33:	83 c4 04             	add    esp,0x4
10012f36:	f2 0f 58 05 f8 1d 1a 	addsd  xmm0,QWORD PTR ds:0x101a1df8
10012f3d:	10 
10012f3e:	8b cf                	mov    ecx,edi
10012f40:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10012f44:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10012f49:	ff 56 08             	call   DWORD PTR [esi+0x8]
10012f4c:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10012f4f:	8d 81 dc 00 00 00    	lea    eax,[ecx+0xdc]
10012f55:	50                   	push   eax
10012f56:	51                   	push   ecx
10012f57:	e8 74 03 00 00       	call   0x100132d0
10012f5c:	83 c4 08             	add    esp,0x8
10012f5f:	5f                   	pop    edi
10012f60:	5e                   	pop    esi
10012f61:	8b e5                	mov    esp,ebp
10012f63:	5d                   	pop    ebp
10012f64:	c3                   	ret
