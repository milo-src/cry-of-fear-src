
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008a9e0 <.text+0x899e0>:
1008a9e0:	55                   	push   ebp
1008a9e1:	8b ec                	mov    ebp,esp
1008a9e3:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
1008a9e8:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1008a9eb:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1008a9ee:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1008a9f1:	0f 5a c1             	cvtps2pd xmm0,xmm1
1008a9f4:	83 ec 08             	sub    esp,0x8
1008a9f7:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1008a9fa:	f2 0f 59 05 90 8e 1b 	mulsd  xmm0,QWORD PTR ds:0x101b8e90
1008aa01:	10 
1008aa02:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1008aa06:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1008aa0c:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1008aa11:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1008aa14:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1008aa17:	83 ec 0c             	sub    esp,0xc
1008aa1a:	8b cc                	mov    ecx,esp
1008aa1c:	89 01                	mov    DWORD PTR [ecx],eax
1008aa1e:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
1008aa21:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008aa24:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
1008aa27:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008aa2a:	e8 61 fc ff ff       	call   0x1008a690
1008aa2f:	83 c4 24             	add    esp,0x24
1008aa32:	5d                   	pop    ebp
1008aa33:	c2 14 00             	ret    0x14
