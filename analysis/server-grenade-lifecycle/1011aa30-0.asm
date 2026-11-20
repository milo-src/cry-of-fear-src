
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011aa30 <.text+0x119a30>:
1011aa30:	55                   	push   ebp
1011aa31:	8b ec                	mov    ebp,esp
1011aa33:	83 ec 10             	sub    esp,0x10
1011aa36:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1011aa39:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1011aa3d:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
1011aa42:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
1011aa47:	8d 45 f0             	lea    eax,[ebp-0x10]
1011aa4a:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1011aa4f:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1011aa54:	50                   	push   eax
1011aa55:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1011aa5a:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1011aa5f:	e8 1c ed ff ff       	call   0x10119780
1011aa64:	83 c4 04             	add    esp,0x4
1011aa67:	83 f8 fd             	cmp    eax,0xfffffffd
1011aa6a:	74 07                	je     0x1011aa73
1011aa6c:	d9 45 0c             	fld    DWORD PTR [ebp+0xc]
1011aa6f:	8b e5                	mov    esp,ebp
1011aa71:	5d                   	pop    ebp
1011aa72:	c3                   	ret
1011aa73:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1011aa78:	8d 45 f0             	lea    eax,[ebp-0x10]
1011aa7b:	50                   	push   eax
1011aa7c:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
1011aa81:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1011aa86:	e8 f5 ec ff ff       	call   0x10119780
1011aa8b:	83 c4 04             	add    esp,0x4
1011aa8e:	83 f8 fd             	cmp    eax,0xfffffffd
1011aa91:	75 07                	jne    0x1011aa9a
1011aa93:	d9 45 10             	fld    DWORD PTR [ebp+0x10]
1011aa96:	8b e5                	mov    esp,ebp
1011aa98:	5d                   	pop    ebp
1011aa99:	c3                   	ret
1011aa9a:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1011aa9f:	f3 0f 10 55 0c       	movss  xmm2,DWORD PTR [ebp+0xc]
1011aaa4:	f3 0f 5c c2          	subss  xmm0,xmm2
1011aaa8:	0f 2f 05 90 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1390
1011aaaf:	76 59                	jbe    0x1011ab0a
1011aab1:	0f 5a c8             	cvtps2pd xmm1,xmm0
1011aab4:	8d 45 f0             	lea    eax,[ebp-0x10]
1011aab7:	50                   	push   eax
1011aab8:	0f 5a c2             	cvtps2pd xmm0,xmm2
1011aabb:	f2 0f 59 0d 48 1e 1a 	mulsd  xmm1,QWORD PTR ds:0x101a1e48
1011aac2:	10 
1011aac3:	f2 0f 58 c8          	addsd  xmm1,xmm0
1011aac7:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
1011aacb:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1011aad0:	e8 ab ec ff ff       	call   0x10119780
1011aad5:	83 c4 04             	add    esp,0x4
1011aad8:	83 f8 fd             	cmp    eax,0xfffffffd
1011aadb:	75 11                	jne    0x1011aaee
1011aadd:	f3 0f 10 55 f8       	movss  xmm2,DWORD PTR [ebp-0x8]
1011aae2:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1011aae7:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
1011aaec:	eb 0f                	jmp    0x1011aafd
1011aaee:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
1011aaf3:	f3 0f 10 55 fc       	movss  xmm2,DWORD PTR [ebp-0x4]
1011aaf8:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
1011aafd:	f3 0f 5c c2          	subss  xmm0,xmm2
1011ab01:	0f 2f 05 90 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1390
1011ab08:	77 a7                	ja     0x1011aab1
1011ab0a:	d9 45 f8             	fld    DWORD PTR [ebp-0x8]
1011ab0d:	8b e5                	mov    esp,ebp
1011ab0f:	5d                   	pop    ebp
1011ab10:	c3                   	ret
