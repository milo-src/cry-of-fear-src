
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cebc0 <.text+0xcdbc0>:
100cebc0:	55                   	push   ebp
100cebc1:	8b ec                	mov    ebp,esp
100cebc3:	83 e4 c0             	and    esp,0xffffffc0
100cebc6:	83 ec 34             	sub    esp,0x34
100cebc9:	53                   	push   ebx
100cebca:	56                   	push   esi
100cebcb:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
100cebce:	57                   	push   edi
100cebcf:	8b f9                	mov    edi,ecx
100cebd1:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
100cebd5:	85 f6                	test   esi,esi
100cebd7:	74 24                	je     0x100cebfd
100cebd9:	68 98 68 1d 10       	push   0x101d6898
100cebde:	56                   	push   esi
100cebdf:	e8 4c 12 00 00       	call   0x100cfe30
100cebe4:	68 d8 6a 1d 10       	push   0x101d6ad8
100cebe9:	56                   	push   esi
100cebea:	e8 41 12 00 00       	call   0x100cfe30
100cebef:	68 98 68 1d 10       	push   0x101d6898
100cebf4:	56                   	push   esi
100cebf5:	e8 36 12 00 00       	call   0x100cfe30
100cebfa:	83 c4 18             	add    esp,0x18
100cebfd:	33 c0                	xor    eax,eax
100cebff:	33 db                	xor    ebx,ebx
100cec01:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
100cec05:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
100cec09:	39 47 18             	cmp    DWORD PTR [edi+0x18],eax
100cec0c:	0f 8e f4 02 00 00    	jle    0x100cef06
100cec12:	33 d2                	xor    edx,edx
100cec14:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
100cec18:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100cec1f:	00 
100cec20:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
100cec23:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100cec27:	85 f6                	test   esi,esi
100cec29:	74 17                	je     0x100cec42
100cec2b:	53                   	push   ebx
100cec2c:	68 ec 6a 1d 10       	push   0x101d6aec
100cec31:	56                   	push   esi
100cec32:	e8 f9 11 00 00       	call   0x100cfe30
100cec37:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
100cec3b:	83 c4 0c             	add    esp,0xc
100cec3e:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100cec42:	33 db                	xor    ebx,ebx
100cec44:	39 5c 0a 20          	cmp    DWORD PTR [edx+ecx*1+0x20],ebx
100cec48:	0f 8e 85 02 00 00    	jle    0x100ceed3
100cec4e:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100cec51:	8b 44 0a 24          	mov    eax,DWORD PTR [edx+ecx*1+0x24]
100cec55:	03 c3                	add    eax,ebx
100cec57:	8d 3c 40             	lea    edi,[eax+eax*2]
100cec5a:	6b 44 fe 04 58       	imul   eax,DWORD PTR [esi+edi*8+0x4],0x58
100cec5f:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
100cec63:	03 46 0c             	add    eax,DWORD PTR [esi+0xc]
100cec66:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100cec6b:	f3 0f 5c 44 0a 04    	subss  xmm0,DWORD PTR [edx+ecx*1+0x4]
100cec71:	f3 0f 10 10          	movss  xmm2,DWORD PTR [eax]
100cec75:	f3 0f 5c 14 0a       	subss  xmm2,DWORD PTR [edx+ecx*1]
100cec7a:	0f 28 c8             	movaps xmm1,xmm0
100cec7d:	f3 0f 11 44 24 14    	movss  DWORD PTR [esp+0x14],xmm0
100cec83:	f3 0f 59 c8          	mulss  xmm1,xmm0
100cec87:	0f 28 c2             	movaps xmm0,xmm2
100cec8a:	f3 0f 11 54 24 18    	movss  DWORD PTR [esp+0x18],xmm2
100cec90:	f3 0f 59 c2          	mulss  xmm0,xmm2
100cec94:	f3 0f 58 c8          	addss  xmm1,xmm0
100cec98:	0f 5a c1             	cvtps2pd xmm0,xmm1
100cec9b:	0f 57 c9             	xorps  xmm1,xmm1
100cec9e:	66 0f 2e c8          	ucomisd xmm1,xmm0
100ceca2:	77 06                	ja     0x100cecaa
100ceca4:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100ceca8:	eb 05                	jmp    0x100cecaf
100cecaa:	e8 e1 d1 09 00       	call   0x1016be90
100cecaf:	0f 57 d2             	xorps  xmm2,xmm2
100cecb2:	0f 57 e4             	xorps  xmm4,xmm4
100cecb5:	f2 0f 5a d0          	cvtsd2ss xmm2,xmm0
100cecb9:	0f 2e d4             	ucomiss xmm2,xmm4
100cecbc:	f3 0f 11 54 24 38    	movss  DWORD PTR [esp+0x38],xmm2
100cecc2:	9f                   	lahf
100cecc3:	f6 c4 44             	test   ah,0x44
100cecc6:	7a 0e                	jp     0x100cecd6
100cecc8:	f3 0f 11 64 24 18    	movss  DWORD PTR [esp+0x18],xmm4
100cecce:	f3 0f 11 64 24 14    	movss  DWORD PTR [esp+0x14],xmm4
100cecd4:	eb 2c                	jmp    0x100ced02
100cecd6:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100cecdd:	10 
100cecde:	f3 0f 5e c2          	divss  xmm0,xmm2
100cece2:	f3 0f 10 4c 24 18    	movss  xmm1,DWORD PTR [esp+0x18]
100cece8:	f3 0f 59 c8          	mulss  xmm1,xmm0
100cecec:	f3 0f 11 4c 24 18    	movss  DWORD PTR [esp+0x18],xmm1
100cecf2:	f3 0f 10 4c 24 14    	movss  xmm1,DWORD PTR [esp+0x14]
100cecf8:	f3 0f 59 c8          	mulss  xmm1,xmm0
100cecfc:	f3 0f 11 4c 24 14    	movss  DWORD PTR [esp+0x14],xmm1
100ced02:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ced05:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100ced09:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100ced0d:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
100ced14:	00 
100ced15:	f3 0f 11 54 fe 14    	movss  DWORD PTR [esi+edi*8+0x14],xmm2
100ced1b:	33 ff                	xor    edi,edi
100ced1d:	8b 44 0a 20          	mov    eax,DWORD PTR [edx+ecx*1+0x20]
100ced21:	85 c0                	test   eax,eax
100ced23:	0f 8e 9a 01 00 00    	jle    0x100ceec3
100ced29:	8b f0                	mov    esi,eax
100ced2b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100ced30:	83 7c 24 28 00       	cmp    DWORD PTR [esp+0x28],0x0
100ced35:	8b c6                	mov    eax,esi
100ced37:	0f 85 83 01 00 00    	jne    0x100ceec0
100ced3d:	3b fb                	cmp    edi,ebx
100ced3f:	0f 84 70 01 00 00    	je     0x100ceeb5
100ced45:	8b 44 0a 24          	mov    eax,DWORD PTR [edx+ecx*1+0x24]
100ced49:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100ced4c:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
100ced50:	03 c7                	add    eax,edi
100ced52:	8d 04 40             	lea    eax,[eax+eax*2]
100ced55:	8b 44 c2 04          	mov    eax,DWORD PTR [edx+eax*8+0x4]
100ced59:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
100ced5d:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
100ced61:	6b c0 58             	imul   eax,eax,0x58
100ced64:	03 42 0c             	add    eax,DWORD PTR [edx+0xc]
100ced67:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100ced6b:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100ced70:	f3 0f 5c 44 0a 04    	subss  xmm0,DWORD PTR [edx+ecx*1+0x4]
100ced76:	f3 0f 10 10          	movss  xmm2,DWORD PTR [eax]
100ced7a:	f3 0f 5c 14 0a       	subss  xmm2,DWORD PTR [edx+ecx*1]
100ced7f:	0f 28 c8             	movaps xmm1,xmm0
100ced82:	f3 0f 11 44 24 34    	movss  DWORD PTR [esp+0x34],xmm0
100ced88:	f3 0f 59 c8          	mulss  xmm1,xmm0
100ced8c:	0f 28 c2             	movaps xmm0,xmm2
100ced8f:	f3 0f 11 54 24 30    	movss  DWORD PTR [esp+0x30],xmm2
100ced95:	f3 0f 59 c2          	mulss  xmm0,xmm2
100ced99:	f3 0f 58 c8          	addss  xmm1,xmm0
100ced9d:	0f 5a c1             	cvtps2pd xmm0,xmm1
100ceda0:	0f 57 c9             	xorps  xmm1,xmm1
100ceda3:	66 0f 2e c8          	ucomisd xmm1,xmm0
100ceda7:	77 06                	ja     0x100cedaf
100ceda9:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100cedad:	eb 05                	jmp    0x100cedb4
100cedaf:	e8 dc d0 09 00       	call   0x1016be90
100cedb4:	0f 57 db             	xorps  xmm3,xmm3
100cedb7:	0f 57 e4             	xorps  xmm4,xmm4
100cedba:	f2 0f 5a d8          	cvtsd2ss xmm3,xmm0
100cedbe:	0f 2e dc             	ucomiss xmm3,xmm4
100cedc1:	9f                   	lahf
100cedc2:	f6 c4 44             	test   ah,0x44
100cedc5:	7a 08                	jp     0x100cedcf
100cedc7:	0f 57 d2             	xorps  xmm2,xmm2
100cedca:	0f 57 c9             	xorps  xmm1,xmm1
100cedcd:	eb 20                	jmp    0x100cedef
100cedcf:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100cedd6:	10 
100cedd7:	f3 0f 5e c3          	divss  xmm0,xmm3
100ceddb:	f3 0f 10 54 24 30    	movss  xmm2,DWORD PTR [esp+0x30]
100cede1:	f3 0f 10 4c 24 34    	movss  xmm1,DWORD PTR [esp+0x34]
100cede7:	f3 0f 59 d0          	mulss  xmm2,xmm0
100cedeb:	f3 0f 59 c8          	mulss  xmm1,xmm0
100cedef:	f3 0f 59 4c 24 14    	mulss  xmm1,DWORD PTR [esp+0x14]
100cedf5:	8b c6                	mov    eax,esi
100cedf7:	f3 0f 59 54 24 18    	mulss  xmm2,DWORD PTR [esp+0x18]
100cedfd:	f3 0f 58 ca          	addss  xmm1,xmm2
100cee01:	0f 5a c1             	cvtps2pd xmm0,xmm1
100cee04:	66 0f 2f 05 38 76 1d 	comisd xmm0,QWORD PTR ds:0x101d7638
100cee0b:	10 
100cee0c:	0f 82 9b 00 00 00    	jb     0x100ceead
100cee12:	f3 0f 10 4c 24 38    	movss  xmm1,DWORD PTR [esp+0x38]
100cee18:	0f 2f cb             	comiss xmm1,xmm3
100cee1b:	0f 86 8c 00 00 00    	jbe    0x100ceead
100cee21:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100cee24:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
100cee28:	85 d2                	test   edx,edx
100cee2a:	74 3c                	je     0x100cee68
100cee2c:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100cee2f:	83 ec 08             	sub    esp,0x8
100cee32:	03 c3                	add    eax,ebx
100cee34:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100cee39:	ff 74 24 44          	push   DWORD PTR [esp+0x44]
100cee3d:	8d 04 40             	lea    eax,[eax+eax*2]
100cee40:	ff 74 c1 04          	push   DWORD PTR [ecx+eax*8+0x4]
100cee44:	68 f8 6a 1d 10       	push   0x101d6af8
100cee49:	52                   	push   edx
100cee4a:	e8 e1 0f 00 00       	call   0x100cfe30
100cee4f:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
100cee53:	83 c4 18             	add    esp,0x18
100cee56:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
100cee5a:	8b 44 32 24          	mov    eax,DWORD PTR [edx+esi*1+0x24]
100cee5e:	8b 74 32 20          	mov    esi,DWORD PTR [edx+esi*1+0x20]
100cee62:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
100cee66:	eb 04                	jmp    0x100cee6c
100cee68:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100cee6c:	03 c6                	add    eax,esi
100cee6e:	c7 44 24 28 01 00 00 	mov    DWORD PTR [esp+0x28],0x1
100cee75:	00 
100cee76:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100cee79:	8d 0c 40             	lea    ecx,[eax+eax*2]
100cee7c:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
100cee80:	0f 10 44 ce e8       	movups xmm0,XMMWORD PTR [esi+ecx*8-0x18]
100cee85:	03 c3                	add    eax,ebx
100cee87:	4b                   	dec    ebx
100cee88:	8d 04 40             	lea    eax,[eax+eax*2]
100cee8b:	0f 11 04 c6          	movups XMMWORD PTR [esi+eax*8],xmm0
100cee8f:	f3 0f 7e 44 ce f8    	movq   xmm0,QWORD PTR [esi+ecx*8-0x8]
100cee95:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100cee99:	66 0f d6 44 c6 10    	movq   QWORD PTR [esi+eax*8+0x10],xmm0
100cee9f:	ff 4c 0a 20          	dec    DWORD PTR [edx+ecx*1+0x20]
100ceea3:	8b 44 0a 20          	mov    eax,DWORD PTR [edx+ecx*1+0x20]
100ceea7:	ff 44 24 24          	inc    DWORD PTR [esp+0x24]
100ceeab:	eb 08                	jmp    0x100ceeb5
100ceead:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100ceeb1:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
100ceeb5:	47                   	inc    edi
100ceeb6:	8b f0                	mov    esi,eax
100ceeb8:	3b f8                	cmp    edi,eax
100ceeba:	0f 8c 70 fe ff ff    	jl     0x100ced30
100ceec0:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ceec3:	43                   	inc    ebx
100ceec4:	3b d8                	cmp    ebx,eax
100ceec6:	0f 8c 85 fd ff ff    	jl     0x100cec51
100ceecc:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
100ceecf:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
100ceed3:	85 f6                	test   esi,esi
100ceed5:	74 12                	je     0x100ceee9
100ceed7:	68 28 6b 1d 10       	push   0x101d6b28
100ceedc:	56                   	push   esi
100ceedd:	e8 4e 0f 00 00       	call   0x100cfe30
100ceee2:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100ceee6:	83 c4 08             	add    esp,0x8
100ceee9:	8b 5c 24 2c          	mov    ebx,DWORD PTR [esp+0x2c]
100ceeed:	83 c2 58             	add    edx,0x58
100ceef0:	43                   	inc    ebx
100ceef1:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
100ceef5:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
100ceef9:	3b 5f 18             	cmp    ebx,DWORD PTR [edi+0x18]
100ceefc:	0f 8c 1e fd ff ff    	jl     0x100cec20
100cef02:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
100cef06:	5f                   	pop    edi
100cef07:	5e                   	pop    esi
100cef08:	5b                   	pop    ebx
100cef09:	8b e5                	mov    esp,ebp
100cef0b:	5d                   	pop    ebp
100cef0c:	c2 08 00             	ret    0x8
