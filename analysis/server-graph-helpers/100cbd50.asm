
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cbd50 <.text+0xcad50>:
100cbd50:	55                   	push   ebp
100cbd51:	8b ec                	mov    ebp,esp
100cbd53:	83 e4 f8             	and    esp,0xfffffff8
100cbd56:	83 ec 44             	sub    esp,0x44
100cbd59:	53                   	push   ebx
100cbd5a:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
100cbd5d:	8b c3                	mov    eax,ebx
100cbd5f:	56                   	push   esi
100cbd60:	57                   	push   edi
100cbd61:	8b f9                	mov    edi,ecx
100cbd63:	03 c0                	add    eax,eax
100cbd65:	8b 4f 24             	mov    ecx,DWORD PTR [edi+0x24]
100cbd68:	8b 97 60 18 00 00    	mov    edx,DWORD PTR [edi+0x1860]
100cbd6e:	39 54 c1 0c          	cmp    DWORD PTR [ecx+eax*8+0xc],edx
100cbd72:	0f 84 53 02 00 00    	je     0x100cbfcb
100cbd78:	89 54 c1 0c          	mov    DWORD PTR [ecx+eax*8+0xc],edx
100cbd7c:	8b 77 0c             	mov    esi,DWORD PTR [edi+0xc]
100cbd7f:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
100cbd84:	83 c6 0c             	add    esi,0xc
100cbd87:	f3 0f 10 55 0c       	movss  xmm2,DWORD PTR [ebp+0xc]
100cbd8c:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100cbd91:	6b cb 58             	imul   ecx,ebx,0x58
100cbd94:	03 f1                	add    esi,ecx
100cbd96:	f3 0f 5c 56 04       	subss  xmm2,DWORD PTR [esi+0x4]
100cbd9b:	f3 0f 5c 0e          	subss  xmm1,DWORD PTR [esi]
100cbd9f:	f3 0f 5c 46 08       	subss  xmm0,DWORD PTR [esi+0x8]
100cbda4:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
100cbda8:	f3 0f 59 d2          	mulss  xmm2,xmm2
100cbdac:	f3 0f 59 c9          	mulss  xmm1,xmm1
100cbdb0:	f3 0f 59 c0          	mulss  xmm0,xmm0
100cbdb4:	f3 0f 58 d1          	addss  xmm2,xmm1
100cbdb8:	0f 57 c9             	xorps  xmm1,xmm1
100cbdbb:	f3 0f 58 d0          	addss  xmm2,xmm0
100cbdbf:	0f 5a c2             	cvtps2pd xmm0,xmm2
100cbdc2:	66 0f 2e c8          	ucomisd xmm1,xmm0
100cbdc6:	77 06                	ja     0x100cbdce
100cbdc8:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100cbdcc:	eb 05                	jmp    0x100cbdd3
100cbdce:	e8 bd 00 0a 00       	call   0x1016be90
100cbdd3:	0f 57 c9             	xorps  xmm1,xmm1
100cbdd6:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100cbdda:	f3 0f 10 87 28 18 00 	movss  xmm0,DWORD PTR [edi+0x1828]
100cbde1:	00 
100cbde2:	0f 2f c1             	comiss xmm0,xmm1
100cbde5:	f3 0f 11 4c 24 10    	movss  DWORD PTR [esp+0x10],xmm1
100cbdeb:	0f 86 da 01 00 00    	jbe    0x100cbfcb
100cbdf1:	8d 44 24 18          	lea    eax,[esp+0x18]
100cbdf5:	50                   	push   eax
100cbdf6:	6a 00                	push   0x0
100cbdf8:	6a 01                	push   0x1
100cbdfa:	8d 45 08             	lea    eax,[ebp+0x8]
100cbdfd:	56                   	push   esi
100cbdfe:	50                   	push   eax
100cbdff:	e8 fc e9 04 00       	call   0x1011a800
100cbe04:	f3 0f 10 44 24 3c    	movss  xmm0,DWORD PTR [esp+0x3c]
100cbe0a:	83 c4 14             	add    esp,0x14
100cbe0d:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100cbe14:	9f                   	lahf
100cbe15:	f6 c4 44             	test   ah,0x44
100cbe18:	0f 8a ad 01 00 00    	jp     0x100cbfcb
100cbe1e:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
100cbe21:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
100cbe25:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
100cbe2b:	89 9f 2c 18 00 00    	mov    DWORD PTR [edi+0x182c],ebx
100cbe31:	f3 0f 11 87 28 18 00 	movss  DWORD PTR [edi+0x1828],xmm0
100cbe38:	00 
100cbe39:	0f b6 44 06 18       	movzx  eax,BYTE PTR [esi+eax*1+0x18]
100cbe3e:	f3 0f 2c 97 64 18 00 	cvttss2si edx,DWORD PTR [edi+0x1864]
100cbe45:	00 
100cbe46:	50                   	push   eax
100cbe47:	f3 0f 2c 45 08       	cvttss2si eax,DWORD PTR [ebp+0x8]
100cbe4c:	f3 0f 2c 8f 70 18 00 	cvttss2si ecx,DWORD PTR [edi+0x1870]
100cbe53:	00 
100cbe54:	2b c2                	sub    eax,edx
100cbe56:	c1 e0 08             	shl    eax,0x8
100cbe59:	2b ca                	sub    ecx,edx
100cbe5b:	99                   	cdq
100cbe5c:	41                   	inc    ecx
100cbe5d:	f7 f9                	idiv   ecx
100cbe5f:	50                   	push   eax
100cbe60:	8d 87 3c 18 00 00    	lea    eax,[edi+0x183c]
100cbe66:	50                   	push   eax
100cbe67:	8d 87 30 18 00 00    	lea    eax,[edi+0x1830]
100cbe6d:	50                   	push   eax
100cbe6e:	e8 6d 3f 00 00       	call   0x100cfde0
100cbe73:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
100cbe76:	f3 0f 2c 97 68 18 00 	cvttss2si edx,DWORD PTR [edi+0x1868]
100cbe7d:	00 
100cbe7e:	0f b6 44 06 19       	movzx  eax,BYTE PTR [esi+eax*1+0x19]
100cbe83:	50                   	push   eax
100cbe84:	f3 0f 2c 45 0c       	cvttss2si eax,DWORD PTR [ebp+0xc]
100cbe89:	f3 0f 2c 8f 74 18 00 	cvttss2si ecx,DWORD PTR [edi+0x1874]
100cbe90:	00 
100cbe91:	2b c2                	sub    eax,edx
100cbe93:	c1 e0 08             	shl    eax,0x8
100cbe96:	2b ca                	sub    ecx,edx
100cbe98:	99                   	cdq
100cbe99:	41                   	inc    ecx
100cbe9a:	f7 f9                	idiv   ecx
100cbe9c:	50                   	push   eax
100cbe9d:	8d 87 40 18 00 00    	lea    eax,[edi+0x1840]
100cbea3:	50                   	push   eax
100cbea4:	8d 87 34 18 00 00    	lea    eax,[edi+0x1834]
100cbeaa:	50                   	push   eax
100cbeab:	e8 30 3f 00 00       	call   0x100cfde0
100cbeb0:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
100cbeb3:	f3 0f 2c 97 6c 18 00 	cvttss2si edx,DWORD PTR [edi+0x186c]
100cbeba:	00 
100cbebb:	0f b6 44 06 1a       	movzx  eax,BYTE PTR [esi+eax*1+0x1a]
100cbec0:	50                   	push   eax
100cbec1:	f3 0f 2c 45 10       	cvttss2si eax,DWORD PTR [ebp+0x10]
100cbec6:	f3 0f 2c 8f 78 18 00 	cvttss2si ecx,DWORD PTR [edi+0x1878]
100cbecd:	00 
100cbece:	2b c2                	sub    eax,edx
100cbed0:	c1 e0 08             	shl    eax,0x8
100cbed3:	2b ca                	sub    ecx,edx
100cbed5:	99                   	cdq
100cbed6:	41                   	inc    ecx
100cbed7:	f7 f9                	idiv   ecx
100cbed9:	50                   	push   eax
100cbeda:	8d 87 44 18 00 00    	lea    eax,[edi+0x1844]
100cbee0:	50                   	push   eax
100cbee1:	8d 87 38 18 00 00    	lea    eax,[edi+0x1838]
100cbee7:	50                   	push   eax
100cbee8:	e8 f3 3e 00 00       	call   0x100cfde0
100cbeed:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
100cbef2:	83 c4 30             	add    esp,0x30
100cbef5:	f3 0f 10 54 24 10    	movss  xmm2,DWORD PTR [esp+0x10]
100cbefb:	0f 28 c1             	movaps xmm0,xmm1
100cbefe:	f3 0f 2c b7 64 18 00 	cvttss2si esi,DWORD PTR [edi+0x1864]
100cbf05:	00 
100cbf06:	f3 0f 2c 8f 70 18 00 	cvttss2si ecx,DWORD PTR [edi+0x1870]
100cbf0d:	00 
100cbf0e:	f3 0f 5c c2          	subss  xmm0,xmm2
100cbf12:	2b ce                	sub    ecx,esi
100cbf14:	f3 0f 58 ca          	addss  xmm1,xmm2
100cbf18:	41                   	inc    ecx
100cbf19:	f3 0f 2c c0          	cvttss2si eax,xmm0
100cbf1d:	2b c6                	sub    eax,esi
100cbf1f:	c1 e0 08             	shl    eax,0x8
100cbf22:	99                   	cdq
100cbf23:	f7 f9                	idiv   ecx
100cbf25:	89 87 48 18 00 00    	mov    DWORD PTR [edi+0x1848],eax
100cbf2b:	f3 0f 2c c1          	cvttss2si eax,xmm1
100cbf2f:	2b c6                	sub    eax,esi
100cbf31:	c1 e0 08             	shl    eax,0x8
100cbf34:	99                   	cdq
100cbf35:	f7 f9                	idiv   ecx
100cbf37:	f3 0f 2c b7 68 18 00 	cvttss2si esi,DWORD PTR [edi+0x1868]
100cbf3e:	00 
100cbf3f:	89 87 54 18 00 00    	mov    DWORD PTR [edi+0x1854],eax
100cbf45:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
100cbf4a:	f3 0f 2c 8f 74 18 00 	cvttss2si ecx,DWORD PTR [edi+0x1874]
100cbf51:	00 
100cbf52:	0f 28 c1             	movaps xmm0,xmm1
100cbf55:	f3 0f 58 ca          	addss  xmm1,xmm2
100cbf59:	f3 0f 5c c2          	subss  xmm0,xmm2
100cbf5d:	2b ce                	sub    ecx,esi
100cbf5f:	41                   	inc    ecx
100cbf60:	f3 0f 2c c0          	cvttss2si eax,xmm0
100cbf64:	2b c6                	sub    eax,esi
100cbf66:	c1 e0 08             	shl    eax,0x8
100cbf69:	99                   	cdq
100cbf6a:	f7 f9                	idiv   ecx
100cbf6c:	89 87 4c 18 00 00    	mov    DWORD PTR [edi+0x184c],eax
100cbf72:	f3 0f 2c c1          	cvttss2si eax,xmm1
100cbf76:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
100cbf7b:	2b c6                	sub    eax,esi
100cbf7d:	0f 28 c1             	movaps xmm0,xmm1
100cbf80:	c1 e0 08             	shl    eax,0x8
100cbf83:	f3 0f 5c c2          	subss  xmm0,xmm2
100cbf87:	99                   	cdq
100cbf88:	f3 0f 58 ca          	addss  xmm1,xmm2
100cbf8c:	f7 f9                	idiv   ecx
100cbf8e:	f3 0f 2c b7 6c 18 00 	cvttss2si esi,DWORD PTR [edi+0x186c]
100cbf95:	00 
100cbf96:	89 87 58 18 00 00    	mov    DWORD PTR [edi+0x1858],eax
100cbf9c:	f3 0f 2c 8f 78 18 00 	cvttss2si ecx,DWORD PTR [edi+0x1878]
100cbfa3:	00 
100cbfa4:	f3 0f 2c c0          	cvttss2si eax,xmm0
100cbfa8:	2b ce                	sub    ecx,esi
100cbfaa:	41                   	inc    ecx
100cbfab:	2b c6                	sub    eax,esi
100cbfad:	c1 e0 08             	shl    eax,0x8
100cbfb0:	99                   	cdq
100cbfb1:	f7 f9                	idiv   ecx
100cbfb3:	89 87 50 18 00 00    	mov    DWORD PTR [edi+0x1850],eax
100cbfb9:	f3 0f 2c c1          	cvttss2si eax,xmm1
100cbfbd:	2b c6                	sub    eax,esi
100cbfbf:	c1 e0 08             	shl    eax,0x8
100cbfc2:	99                   	cdq
100cbfc3:	f7 f9                	idiv   ecx
100cbfc5:	89 87 5c 18 00 00    	mov    DWORD PTR [edi+0x185c],eax
100cbfcb:	5f                   	pop    edi
100cbfcc:	5e                   	pop    esi
100cbfcd:	5b                   	pop    ebx
100cbfce:	8b e5                	mov    esp,ebp
100cbfd0:	5d                   	pop    ebp
100cbfd1:	c2 10 00             	ret    0x10
