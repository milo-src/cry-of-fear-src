
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100abc90 <.text+0xaac90>:
100abc90:	55                   	push   ebp
100abc91:	8b ec                	mov    ebp,esp
100abc93:	83 e4 f8             	and    esp,0xfffffff8
100abc96:	83 ec 2c             	sub    esp,0x2c
100abc99:	53                   	push   ebx
100abc9a:	56                   	push   esi
100abc9b:	57                   	push   edi
100abc9c:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100abc9f:	8b f1                	mov    esi,ecx
100abca1:	57                   	push   edi
100abca2:	e8 d9 da 06 00       	call   0x10119780
100abca7:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100abcaa:	83 c4 04             	add    esp,0x4
100abcad:	8b d8                	mov    ebx,eax
100abcaf:	8b 91 a8 01 00 00    	mov    edx,DWORD PTR [ecx+0x1a8]
100abcb5:	33 c9                	xor    ecx,ecx
100abcb7:	d1 ea                	shr    edx,1
100abcb9:	83 e2 01             	and    edx,0x1
100abcbc:	83 fb fd             	cmp    ebx,0xfffffffd
100abcbf:	0f 94 c1             	sete   cl
100abcc2:	3b d1                	cmp    edx,ecx
100abcc4:	74 17                	je     0x100abcdd
100abcc6:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100abcc9:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
100abccf:	b8 01 00 00 00       	mov    eax,0x1
100abcd4:	5f                   	pop    edi
100abcd5:	5e                   	pop    esi
100abcd6:	5b                   	pop    ebx
100abcd7:	8b e5                	mov    esp,ebp
100abcd9:	5d                   	pop    ebp
100abcda:	c2 0c 00             	ret    0xc
100abcdd:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
100abce0:	56                   	push   esi
100abce1:	e8 9a da 06 00       	call   0x10119780
100abce6:	83 c4 04             	add    esp,0x4
100abce9:	3b c3                	cmp    eax,ebx
100abceb:	75 14                	jne    0x100abd01
100abced:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100abcf0:	c7 00 00 00 80 3f    	mov    DWORD PTR [eax],0x3f800000
100abcf6:	33 c0                	xor    eax,eax
100abcf8:	5f                   	pop    edi
100abcf9:	5e                   	pop    esi
100abcfa:	5b                   	pop    ebx
100abcfb:	8b e5                	mov    esp,ebp
100abcfd:	5d                   	pop    ebp
100abcfe:	c2 0c 00             	ret    0xc
100abd01:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100abd05:	f3 0f 5c 07          	subss  xmm0,DWORD PTR [edi]
100abd09:	f3 0f 10 56 04       	movss  xmm2,DWORD PTR [esi+0x4]
100abd0e:	f3 0f 5c 57 04       	subss  xmm2,DWORD PTR [edi+0x4]
100abd13:	f3 0f 10 5e 08       	movss  xmm3,DWORD PTR [esi+0x8]
100abd18:	f3 0f 5c 5f 08       	subss  xmm3,DWORD PTR [edi+0x8]
100abd1d:	0f 28 c8             	movaps xmm1,xmm0
100abd20:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
100abd26:	f3 0f 59 c8          	mulss  xmm1,xmm0
100abd2a:	0f 28 c2             	movaps xmm0,xmm2
100abd2d:	f3 0f 11 54 24 1c    	movss  DWORD PTR [esp+0x1c],xmm2
100abd33:	f3 0f 59 c2          	mulss  xmm0,xmm2
100abd37:	f3 0f 11 5c 24 14    	movss  DWORD PTR [esp+0x14],xmm3
100abd3d:	f3 0f 58 c8          	addss  xmm1,xmm0
100abd41:	0f 28 c3             	movaps xmm0,xmm3
100abd44:	f3 0f 59 c3          	mulss  xmm0,xmm3
100abd48:	f3 0f 58 c8          	addss  xmm1,xmm0
100abd4c:	0f 5a c1             	cvtps2pd xmm0,xmm1
100abd4f:	0f 57 c9             	xorps  xmm1,xmm1
100abd52:	66 0f 2e c8          	ucomisd xmm1,xmm0
100abd56:	77 06                	ja     0x100abd5e
100abd58:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100abd5c:	eb 05                	jmp    0x100abd63
100abd5e:	e8 2d 01 0c 00       	call   0x1016be90
100abd63:	f3 0f 10 1d 90 13 1a 	movss  xmm3,DWORD PTR ds:0x101a1390
100abd6a:	10 
100abd6b:	0f 57 d2             	xorps  xmm2,xmm2
100abd6e:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100abd72:	f3 0f 11 54 24 18    	movss  DWORD PTR [esp+0x18],xmm2
100abd78:	0f 2e c2             	ucomiss xmm0,xmm2
100abd7b:	f3 0f 11 44 24 28    	movss  DWORD PTR [esp+0x28],xmm0
100abd81:	9f                   	lahf
100abd82:	f6 c4 44             	test   ah,0x44
100abd85:	7a 08                	jp     0x100abd8f
100abd87:	0f 57 e4             	xorps  xmm4,xmm4
100abd8a:	0f 57 ed             	xorps  xmm5,xmm5
100abd8d:	eb 1c                	jmp    0x100abdab
100abd8f:	f3 0f 5e d8          	divss  xmm3,xmm0
100abd93:	0f 28 e3             	movaps xmm4,xmm3
100abd96:	0f 28 eb             	movaps xmm5,xmm3
100abd99:	f3 0f 59 64 24 24    	mulss  xmm4,DWORD PTR [esp+0x24]
100abd9f:	f3 0f 59 6c 24 1c    	mulss  xmm5,DWORD PTR [esp+0x1c]
100abda5:	f3 0f 59 5c 24 14    	mulss  xmm3,DWORD PTR [esp+0x14]
100abdab:	f3 0f 11 44 24 14    	movss  DWORD PTR [esp+0x14],xmm0
100abdb1:	f3 0f 5c c2          	subss  xmm0,xmm2
100abdb5:	f3 0f 11 5c 24 1c    	movss  DWORD PTR [esp+0x1c],xmm3
100abdbb:	f3 0f 11 6c 24 24    	movss  DWORD PTR [esp+0x24],xmm5
100abdc1:	f3 0f 11 64 24 20    	movss  DWORD PTR [esp+0x20],xmm4
100abdc7:	0f 2f 05 90 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1390
100abdce:	0f 86 af 00 00 00    	jbe    0x100abe83
100abdd4:	0f 57 c9             	xorps  xmm1,xmm1
100abdd7:	8d 44 24 2c          	lea    eax,[esp+0x2c]
100abddb:	f3 0f 5a c8          	cvtss2sd xmm1,xmm0
100abddf:	50                   	push   eax
100abde0:	0f 5a c2             	cvtps2pd xmm0,xmm2
100abde3:	f2 0f 59 0d 48 1e 1a 	mulsd  xmm1,QWORD PTR ds:0x101a1e48
100abdea:	10 
100abdeb:	f2 0f 58 c8          	addsd  xmm1,xmm0
100abdef:	0f 28 c4             	movaps xmm0,xmm4
100abdf2:	66 0f 5a c9          	cvtpd2ps xmm1,xmm1
100abdf6:	f3 0f 59 c1          	mulss  xmm0,xmm1
100abdfa:	f3 0f 11 4c 24 14    	movss  DWORD PTR [esp+0x14],xmm1
100abe00:	f3 0f 58 07          	addss  xmm0,DWORD PTR [edi]
100abe04:	f3 0f 11 44 24 30    	movss  DWORD PTR [esp+0x30],xmm0
100abe0a:	0f 28 c5             	movaps xmm0,xmm5
100abe0d:	f3 0f 59 c1          	mulss  xmm0,xmm1
100abe11:	f3 0f 58 47 04       	addss  xmm0,DWORD PTR [edi+0x4]
100abe16:	f3 0f 11 44 24 34    	movss  DWORD PTR [esp+0x34],xmm0
100abe1c:	0f 28 c3             	movaps xmm0,xmm3
100abe1f:	f3 0f 59 c1          	mulss  xmm0,xmm1
100abe23:	f3 0f 58 47 08       	addss  xmm0,DWORD PTR [edi+0x8]
100abe28:	f3 0f 11 44 24 38    	movss  DWORD PTR [esp+0x38],xmm0
100abe2e:	e8 4d d9 06 00       	call   0x10119780
100abe33:	83 c4 04             	add    esp,0x4
100abe36:	3b c3                	cmp    eax,ebx
100abe38:	75 14                	jne    0x100abe4e
100abe3a:	f3 0f 10 54 24 10    	movss  xmm2,DWORD PTR [esp+0x10]
100abe40:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
100abe46:	f3 0f 11 54 24 18    	movss  DWORD PTR [esp+0x18],xmm2
100abe4c:	eb 12                	jmp    0x100abe60
100abe4e:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
100abe54:	f3 0f 10 54 24 18    	movss  xmm2,DWORD PTR [esp+0x18]
100abe5a:	f3 0f 11 44 24 14    	movss  DWORD PTR [esp+0x14],xmm0
100abe60:	f3 0f 10 5c 24 1c    	movss  xmm3,DWORD PTR [esp+0x1c]
100abe66:	f3 0f 5c c2          	subss  xmm0,xmm2
100abe6a:	f3 0f 10 64 24 20    	movss  xmm4,DWORD PTR [esp+0x20]
100abe70:	f3 0f 10 6c 24 24    	movss  xmm5,DWORD PTR [esp+0x24]
100abe76:	0f 2f 05 90 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1390
100abe7d:	0f 87 51 ff ff ff    	ja     0x100abdd4
100abe83:	f3 0f 5e 54 24 28    	divss  xmm2,DWORD PTR [esp+0x28]
100abe89:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100abe8c:	5f                   	pop    edi
100abe8d:	5e                   	pop    esi
100abe8e:	5b                   	pop    ebx
100abe8f:	f3 0f 11 10          	movss  DWORD PTR [eax],xmm2
100abe93:	b8 01 00 00 00       	mov    eax,0x1
100abe98:	8b e5                	mov    esp,ebp
100abe9a:	5d                   	pop    ebp
100abe9b:	c2 0c 00             	ret    0xc
