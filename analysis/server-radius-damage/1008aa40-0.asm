
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008aa40 <.text+0x89a40>:
1008aa40:	55                   	push   ebp
1008aa41:	8b ec                	mov    ebp,esp
1008aa43:	f3 0f 10 4d 1c       	movss  xmm1,DWORD PTR [ebp+0x1c]
1008aa48:	ff 75 24             	push   DWORD PTR [ebp+0x24]
1008aa4b:	0f 5a c1             	cvtps2pd xmm0,xmm1
1008aa4e:	ff 75 20             	push   DWORD PTR [ebp+0x20]
1008aa51:	f2 0f 59 05 90 8e 1b 	mulsd  xmm0,QWORD PTR ds:0x101b8e90
1008aa58:	10 
1008aa59:	83 ec 08             	sub    esp,0x8
1008aa5c:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1008aa60:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1008aa66:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1008aa6b:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1008aa70:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1008aa73:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1008aa76:	83 ec 0c             	sub    esp,0xc
1008aa79:	8b c4                	mov    eax,esp
1008aa7b:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008aa7f:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008aa84:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1008aa89:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1008aa8e:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1008aa93:	e8 f8 fb ff ff       	call   0x1008a690
1008aa98:	83 c4 24             	add    esp,0x24
1008aa9b:	5d                   	pop    ebp
1008aa9c:	c2 20 00             	ret    0x20
