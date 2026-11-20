
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4920 <.text+0xc3920>:
100c4920:	55                   	push   ebp
100c4921:	8b ec                	mov    ebp,esp
100c4923:	83 e4 c0             	and    esp,0xffffffc0
100c4926:	83 ec 38             	sub    esp,0x38
100c4929:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c492e:	f3 0f 10 55 10       	movss  xmm2,DWORD PTR [ebp+0x10]
100c4933:	f3 0f 10 5d 14       	movss  xmm3,DWORD PTR [ebp+0x14]
100c4938:	56                   	push   esi
100c4939:	57                   	push   edi
100c493a:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100c493d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c4940:	f3 0f 5c 40 50       	subss  xmm0,DWORD PTR [eax+0x50]
100c4945:	f3 0f 5c 50 54       	subss  xmm2,DWORD PTR [eax+0x54]
100c494a:	f3 0f 5c 58 58       	subss  xmm3,DWORD PTR [eax+0x58]
100c494f:	0f 28 c8             	movaps xmm1,xmm0
100c4952:	f3 0f 11 44 24 28    	movss  DWORD PTR [esp+0x28],xmm0
100c4958:	f3 0f 59 c8          	mulss  xmm1,xmm0
100c495c:	0f 28 c2             	movaps xmm0,xmm2
100c495f:	f3 0f 59 c2          	mulss  xmm0,xmm2
100c4963:	f3 0f 11 54 24 2c    	movss  DWORD PTR [esp+0x2c],xmm2
100c4969:	f3 0f 11 5c 24 30    	movss  DWORD PTR [esp+0x30],xmm3
100c496f:	f3 0f 58 c8          	addss  xmm1,xmm0
100c4973:	0f 28 c3             	movaps xmm0,xmm3
100c4976:	f3 0f 59 c3          	mulss  xmm0,xmm3
100c497a:	f3 0f 58 c8          	addss  xmm1,xmm0
100c497e:	0f 5a c1             	cvtps2pd xmm0,xmm1
100c4981:	0f 57 c9             	xorps  xmm1,xmm1
100c4984:	66 0f 2e c8          	ucomisd xmm1,xmm0
100c4988:	77 06                	ja     0x100c4990
100c498a:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100c498e:	eb 05                	jmp    0x100c4995
100c4990:	e8 fb 74 0a 00       	call   0x1016be90
100c4995:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100c4999:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
100c499d:	66 0f 2f 05 f0 46 1a 	comisd xmm0,QWORD PTR ds:0x101a46f0
100c49a4:	10 
100c49a5:	0f 86 ab 00 00 00    	jbe    0x100c4a56
100c49ab:	68 e8 b6 1c 10       	push   0x101cb6e8
100c49b0:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100c49b6:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
100c49ba:	f3 0f 10 44 24 28    	movss  xmm0,DWORD PTR [esp+0x28]
100c49c0:	83 c4 04             	add    esp,0x4
100c49c3:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100c49ca:	9f                   	lahf
100c49cb:	f6 c4 44             	test   ah,0x44
100c49ce:	0f 8b 82 00 00 00    	jnp    0x100c4a56
100c49d4:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100c49d9:	83 ec 30             	sub    esp,0x30
100c49dc:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100c49df:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c49e2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c49e7:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100c49ed:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
100c49f3:	f2 0f 11 44 24 28    	movsd  QWORD PTR [esp+0x28],xmm0
100c49f9:	03 c1                	add    eax,ecx
100c49fb:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c4a00:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c4a03:	f2 0f 11 44 24 20    	movsd  QWORD PTR [esp+0x20],xmm0
100c4a09:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c4a0e:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c4a11:	f2 0f 11 44 24 18    	movsd  QWORD PTR [esp+0x18],xmm0
100c4a17:	f3 0f 10 42 58       	movss  xmm0,DWORD PTR [edx+0x58]
100c4a1c:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c4a1f:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
100c4a25:	f3 0f 10 42 54       	movss  xmm0,DWORD PTR [edx+0x54]
100c4a2a:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c4a2d:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
100c4a33:	f3 0f 10 42 50       	movss  xmm0,DWORD PTR [edx+0x50]
100c4a38:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c4a3b:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100c4a40:	50                   	push   eax
100c4a41:	8b 02                	mov    eax,DWORD PTR [edx]
100c4a43:	03 c1                	add    eax,ecx
100c4a45:	50                   	push   eax
100c4a46:	68 24 5e 1d 10       	push   0x101d5e24
100c4a4b:	6a 01                	push   0x1
100c4a4d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c4a53:	83 c4 40             	add    esp,0x40
100c4a56:	83 7d 18 00          	cmp    DWORD PTR [ebp+0x18],0x0
100c4a5a:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100c4a5d:	f3 0f 7e 45 0c       	movq   xmm0,QWORD PTR [ebp+0xc]
100c4a62:	66 0f d6 41 50       	movq   QWORD PTR [ecx+0x50],xmm0
100c4a67:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
100c4a6a:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
100c4a6d:	f3 0f 10 5d 14       	movss  xmm3,DWORD PTR [ebp+0x14]
100c4a72:	f3 0f 10 65 10       	movss  xmm4,DWORD PTR [ebp+0x10]
100c4a77:	f3 0f 10 6d 0c       	movss  xmm5,DWORD PTR [ebp+0xc]
100c4a7c:	74 37                	je     0x100c4ab5
100c4a7e:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
100c4a81:	85 c0                	test   eax,eax
100c4a83:	74 30                	je     0x100c4ab5
100c4a85:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100c4a88:	0f 28 d5             	movaps xmm2,xmm5
100c4a8b:	0f 28 cc             	movaps xmm1,xmm4
100c4a8e:	0f 28 c3             	movaps xmm0,xmm3
100c4a91:	f3 0f 5c 50 50       	subss  xmm2,DWORD PTR [eax+0x50]
100c4a96:	f3 0f 5c 48 54       	subss  xmm1,DWORD PTR [eax+0x54]
100c4a9b:	f3 0f 5c 40 58       	subss  xmm0,DWORD PTR [eax+0x58]
100c4aa0:	0f 14 d1             	unpcklps xmm2,xmm1
100c4aa3:	f3 0f 11 44 24 3c    	movss  DWORD PTR [esp+0x3c],xmm0
100c4aa9:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
100c4aad:	66 0f d6 57 30       	movq   QWORD PTR [edi+0x30],xmm2
100c4ab2:	89 47 38             	mov    DWORD PTR [edi+0x38],eax
100c4ab5:	8b 77 1c             	mov    esi,DWORD PTR [edi+0x1c]
100c4ab8:	85 f6                	test   esi,esi
100c4aba:	0f 84 bf 00 00 00    	je     0x100c4b7f
100c4ac0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c4ac3:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100c4ac6:	f3 0f 10 41 5c       	movss  xmm0,DWORD PTR [ecx+0x5c]
100c4acb:	0f 2e 42 5c          	ucomiss xmm0,DWORD PTR [edx+0x5c]
100c4acf:	9f                   	lahf
100c4ad0:	f6 c4 44             	test   ah,0x44
100c4ad3:	7a 50                	jp     0x100c4b25
100c4ad5:	f3 0f 10 41 60       	movss  xmm0,DWORD PTR [ecx+0x60]
100c4ada:	0f 2e 42 60          	ucomiss xmm0,DWORD PTR [edx+0x60]
100c4ade:	9f                   	lahf
100c4adf:	f6 c4 44             	test   ah,0x44
100c4ae2:	7a 41                	jp     0x100c4b25
100c4ae4:	f3 0f 10 41 64       	movss  xmm0,DWORD PTR [ecx+0x64]
100c4ae9:	0f 2e 42 64          	ucomiss xmm0,DWORD PTR [edx+0x64]
100c4aed:	9f                   	lahf
100c4aee:	f6 c4 44             	test   ah,0x44
100c4af1:	7a 32                	jp     0x100c4b25
100c4af3:	f3 0f 10 56 34       	movss  xmm2,DWORD PTR [esi+0x34]
100c4af8:	f3 0f 10 4e 38       	movss  xmm1,DWORD PTR [esi+0x38]
100c4afd:	f3 0f 58 d4          	addss  xmm2,xmm4
100c4b01:	f3 0f 10 46 30       	movss  xmm0,DWORD PTR [esi+0x30]
100c4b06:	f3 0f 58 cb          	addss  xmm1,xmm3
100c4b0a:	6a 00                	push   0x0
100c4b0c:	83 ec 0c             	sub    esp,0xc
100c4b0f:	f3 0f 58 c5          	addss  xmm0,xmm5
100c4b13:	8b c4                	mov    eax,esp
100c4b15:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100c4b19:	f3 0f 11 50 04       	movss  DWORD PTR [eax+0x4],xmm2
100c4b1e:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
100c4b23:	eb 36                	jmp    0x100c4b5b
100c4b25:	f3 0f 10 51 50       	movss  xmm2,DWORD PTR [ecx+0x50]
100c4b2a:	f3 0f 10 49 54       	movss  xmm1,DWORD PTR [ecx+0x54]
100c4b2f:	f3 0f 10 41 58       	movss  xmm0,DWORD PTR [ecx+0x58]
100c4b34:	f3 0f 58 54 24 28    	addss  xmm2,DWORD PTR [esp+0x28]
100c4b3a:	f3 0f 58 4c 24 2c    	addss  xmm1,DWORD PTR [esp+0x2c]
100c4b40:	f3 0f 58 44 24 30    	addss  xmm0,DWORD PTR [esp+0x30]
100c4b46:	6a 00                	push   0x0
100c4b48:	83 ec 0c             	sub    esp,0xc
100c4b4b:	8b c4                	mov    eax,esp
100c4b4d:	f3 0f 11 10          	movss  DWORD PTR [eax],xmm2
100c4b51:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
100c4b56:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100c4b5b:	56                   	push   esi
100c4b5c:	e8 bf fd ff ff       	call   0x100c4920
100c4b61:	8b 76 20             	mov    esi,DWORD PTR [esi+0x20]
100c4b64:	83 c4 14             	add    esp,0x14
100c4b67:	85 f6                	test   esi,esi
100c4b69:	74 14                	je     0x100c4b7f
100c4b6b:	f3 0f 10 5d 14       	movss  xmm3,DWORD PTR [ebp+0x14]
100c4b70:	f3 0f 10 65 10       	movss  xmm4,DWORD PTR [ebp+0x10]
100c4b75:	f3 0f 10 6d 0c       	movss  xmm5,DWORD PTR [ebp+0xc]
100c4b7a:	e9 41 ff ff ff       	jmp    0x100c4ac0
100c4b7f:	5f                   	pop    edi
100c4b80:	5e                   	pop    esi
100c4b81:	8b e5                	mov    esp,ebp
100c4b83:	5d                   	pop    ebp
100c4b84:	c3                   	ret
