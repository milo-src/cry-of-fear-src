
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b1950 <.text+0xb0950>:
100b1950:	55                   	push   ebp
100b1951:	8b ec                	mov    ebp,esp
100b1953:	83 e4 f8             	and    esp,0xfffffff8
100b1956:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100b1959:	83 ec 68             	sub    esp,0x68
100b195c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100b195f:	56                   	push   esi
100b1960:	57                   	push   edi
100b1961:	8b f9                	mov    edi,ecx
100b1963:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100b1969:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100b196c:	89 82 94 01 00 00    	mov    DWORD PTR [edx+0x194],eax
100b1972:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100b1975:	f3 0f 10 4e 20       	movss  xmm1,DWORD PTR [esi+0x20]
100b197a:	f3 0f 10 46 24       	movss  xmm0,DWORD PTR [esi+0x24]
100b197f:	f3 0f 59 c0          	mulss  xmm0,xmm0
100b1983:	f3 0f 59 c9          	mulss  xmm1,xmm1
100b1987:	f3 0f 58 c8          	addss  xmm1,xmm0
100b198b:	f3 0f 10 46 28       	movss  xmm0,DWORD PTR [esi+0x28]
100b1990:	f3 0f 59 c0          	mulss  xmm0,xmm0
100b1994:	f3 0f 58 c8          	addss  xmm1,xmm0
100b1998:	0f 5a c1             	cvtps2pd xmm0,xmm1
100b199b:	0f 57 c9             	xorps  xmm1,xmm1
100b199e:	66 0f 2e c8          	ucomisd xmm1,xmm0
100b19a2:	77 06                	ja     0x100b19aa
100b19a4:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100b19a8:	eb 05                	jmp    0x100b19af
100b19aa:	e8 e1 a4 0b 00       	call   0x1016be90
100b19af:	0f 57 c9             	xorps  xmm1,xmm1
100b19b2:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100b19b6:	0f 57 c0             	xorps  xmm0,xmm0
100b19b9:	0f 2e c8             	ucomiss xmm1,xmm0
100b19bc:	9f                   	lahf
100b19bd:	f6 c4 44             	test   ah,0x44
100b19c0:	7a 10                	jp     0x100b19d2
100b19c2:	f3 0f 10 1d 90 13 1a 	movss  xmm3,DWORD PTR ds:0x101a1390
100b19c9:	10 
100b19ca:	0f 57 c9             	xorps  xmm1,xmm1
100b19cd:	0f 57 d2             	xorps  xmm2,xmm2
100b19d0:	eb 27                	jmp    0x100b19f9
100b19d2:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100b19d9:	10 
100b19da:	f3 0f 5e c1          	divss  xmm0,xmm1
100b19de:	f3 0f 10 4e 20       	movss  xmm1,DWORD PTR [esi+0x20]
100b19e3:	f3 0f 10 56 24       	movss  xmm2,DWORD PTR [esi+0x24]
100b19e8:	f3 0f 10 5e 28       	movss  xmm3,DWORD PTR [esi+0x28]
100b19ed:	f3 0f 59 c8          	mulss  xmm1,xmm0
100b19f1:	f3 0f 59 d0          	mulss  xmm2,xmm0
100b19f5:	f3 0f 59 d8          	mulss  xmm3,xmm0
100b19f9:	f3 0f 10 05 28 97 1a 	movss  xmm0,DWORD PTR ds:0x101a9728
100b1a00:	10 
100b1a01:	f3 0f 10 66 08       	movss  xmm4,DWORD PTR [esi+0x8]
100b1a06:	f3 0f 59 c8          	mulss  xmm1,xmm0
100b1a0a:	f3 0f 59 d0          	mulss  xmm2,xmm0
100b1a0e:	f3 0f 59 d8          	mulss  xmm3,xmm0
100b1a12:	f3 0f 5c e1          	subss  xmm4,xmm1
100b1a16:	f3 0f 10 4e 0c       	movss  xmm1,DWORD PTR [esi+0xc]
100b1a1b:	f3 0f 10 46 10       	movss  xmm0,DWORD PTR [esi+0x10]
100b1a20:	f3 0f 5c ca          	subss  xmm1,xmm2
100b1a24:	f3 0f 5c c3          	subss  xmm0,xmm3
100b1a28:	f3 0f 11 64 24 2c    	movss  DWORD PTR [esp+0x2c],xmm4
100b1a2e:	f3 0f 11 64 24 14    	movss  DWORD PTR [esp+0x14],xmm4
100b1a34:	f3 0f 11 4c 24 30    	movss  DWORD PTR [esp+0x30],xmm1
100b1a3a:	f3 0f 11 44 24 34    	movss  DWORD PTR [esp+0x34],xmm0
100b1a40:	f3 0f 10 56 24       	movss  xmm2,DWORD PTR [esi+0x24]
100b1a45:	f3 0f 10 5e 28       	movss  xmm3,DWORD PTR [esi+0x28]
100b1a4a:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
100b1a50:	f3 0f 10 46 20       	movss  xmm0,DWORD PTR [esi+0x20]
100b1a55:	f3 0f 11 4c 24 18    	movss  DWORD PTR [esp+0x18],xmm1
100b1a5b:	0f 28 c8             	movaps xmm1,xmm0
100b1a5e:	f3 0f 59 c8          	mulss  xmm1,xmm0
100b1a62:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100b1a68:	0f 28 c2             	movaps xmm0,xmm2
100b1a6b:	f3 0f 59 c2          	mulss  xmm0,xmm2
100b1a6f:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
100b1a75:	f3 0f 11 5c 24 10    	movss  DWORD PTR [esp+0x10],xmm3
100b1a7b:	f3 0f 58 c8          	addss  xmm1,xmm0
100b1a7f:	0f 28 c3             	movaps xmm0,xmm3
100b1a82:	f3 0f 59 c3          	mulss  xmm0,xmm3
100b1a86:	f3 0f 58 c8          	addss  xmm1,xmm0
100b1a8a:	0f 5a c1             	cvtps2pd xmm0,xmm1
100b1a8d:	0f 57 c9             	xorps  xmm1,xmm1
100b1a90:	66 0f 2e c8          	ucomisd xmm1,xmm0
100b1a94:	77 06                	ja     0x100b1a9c
100b1a96:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100b1a9a:	eb 05                	jmp    0x100b1aa1
100b1a9c:	e8 ef a3 0b 00       	call   0x1016be90
100b1aa1:	0f 57 c9             	xorps  xmm1,xmm1
100b1aa4:	0f 57 d2             	xorps  xmm2,xmm2
100b1aa7:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100b1aab:	0f 2e ca             	ucomiss xmm1,xmm2
100b1aae:	9f                   	lahf
100b1aaf:	f6 c4 44             	test   ah,0x44
100b1ab2:	7a 0d                	jp     0x100b1ac1
100b1ab4:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
100b1abb:	10 
100b1abc:	0f 57 db             	xorps  xmm3,xmm3
100b1abf:	eb 2a                	jmp    0x100b1aeb
100b1ac1:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100b1ac8:	10 
100b1ac9:	f3 0f 5e c1          	divss  xmm0,xmm1
100b1acd:	f3 0f 10 54 24 08    	movss  xmm2,DWORD PTR [esp+0x8]
100b1ad3:	f3 0f 10 5c 24 0c    	movss  xmm3,DWORD PTR [esp+0xc]
100b1ad9:	f3 0f 10 4c 24 10    	movss  xmm1,DWORD PTR [esp+0x10]
100b1adf:	f3 0f 59 d0          	mulss  xmm2,xmm0
100b1ae3:	f3 0f 59 d8          	mulss  xmm3,xmm0
100b1ae7:	f3 0f 59 c8          	mulss  xmm1,xmm0
100b1aeb:	f3 0f 10 05 04 1f 1a 	movss  xmm0,DWORD PTR ds:0x101a1f04
100b1af2:	10 
100b1af3:	8d 44 24 38          	lea    eax,[esp+0x38]
100b1af7:	f3 0f 59 d0          	mulss  xmm2,xmm0
100b1afb:	50                   	push   eax
100b1afc:	f3 0f 59 d8          	mulss  xmm3,xmm0
100b1b00:	8d 44 24 24          	lea    eax,[esp+0x24]
100b1b04:	f3 0f 58 54 24 18    	addss  xmm2,DWORD PTR [esp+0x18]
100b1b0a:	f3 0f 59 c8          	mulss  xmm1,xmm0
100b1b0e:	f3 0f 58 5c 24 1c    	addss  xmm3,DWORD PTR [esp+0x1c]
100b1b14:	f3 0f 58 4c 24 20    	addss  xmm1,DWORD PTR [esp+0x20]
100b1b1a:	f3 0f 11 54 24 24    	movss  DWORD PTR [esp+0x24],xmm2
100b1b20:	f3 0f 11 5c 24 28    	movss  DWORD PTR [esp+0x28],xmm3
100b1b26:	f3 0f 11 4c 24 2c    	movss  DWORD PTR [esp+0x2c],xmm1
100b1b2c:	ff b6 0c 02 00 00    	push   DWORD PTR [esi+0x20c]
100b1b32:	6a 01                	push   0x1
100b1b34:	50                   	push   eax
100b1b35:	8d 44 24 3c          	lea    eax,[esp+0x3c]
100b1b39:	50                   	push   eax
100b1b3a:	e8 c1 8c 06 00       	call   0x1011a800
100b1b3f:	83 c4 14             	add    esp,0x14
100b1b42:	8d 44 24 38          	lea    eax,[esp+0x38]
100b1b46:	8b cf                	mov    ecx,edi
100b1b48:	6a 40                	push   0x40
100b1b4a:	50                   	push   eax
100b1b4b:	e8 f0 f9 ff ff       	call   0x100b1540
100b1b50:	5f                   	pop    edi
100b1b51:	5e                   	pop    esi
100b1b52:	8b e5                	mov    esp,ebp
100b1b54:	5d                   	pop    ebp
100b1b55:	c2 04 00             	ret    0x4
