
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bfc50 <.text+0xbec50>:
100bfc50:	55                   	push   ebp
100bfc51:	8b ec                	mov    ebp,esp
100bfc53:	81 ec c0 01 00 00    	sub    esp,0x1c0
100bfc59:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100bfc5e:	33 c5                	xor    eax,ebp
100bfc60:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100bfc63:	53                   	push   ebx
100bfc64:	56                   	push   esi
100bfc65:	57                   	push   edi
100bfc66:	8b f9                	mov    edi,ecx
100bfc68:	33 f6                	xor    esi,esi
100bfc6a:	89 b5 64 fe ff ff    	mov    DWORD PTR [ebp-0x19c],esi
100bfc70:	ba e4 21 1a 10       	mov    edx,0x101a21e4
100bfc75:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bfc78:	81 a7 80 01 00 00 e1 	and    DWORD PTR [edi+0x180],0xff9fffe1
100bfc7f:	ff 9f ff 
100bfc82:	89 77 10             	mov    DWORD PTR [edi+0x10],esi
100bfc85:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100bfc8b:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100bfc91:	f7 d9                	neg    ecx
100bfc93:	1b c9                	sbb    ecx,ecx
100bfc95:	23 c8                	and    ecx,eax
100bfc97:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bfc9c:	8b 09                	mov    ecx,DWORD PTR [ecx]
100bfc9e:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100bfca4:	8a 01                	mov    al,BYTE PTR [ecx]
100bfca6:	3a 02                	cmp    al,BYTE PTR [edx]
100bfca8:	75 1a                	jne    0x100bfcc4
100bfcaa:	84 c0                	test   al,al
100bfcac:	74 12                	je     0x100bfcc0
100bfcae:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100bfcb1:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100bfcb4:	75 0e                	jne    0x100bfcc4
100bfcb6:	83 c1 02             	add    ecx,0x2
100bfcb9:	83 c2 02             	add    edx,0x2
100bfcbc:	84 c0                	test   al,al
100bfcbe:	75 e4                	jne    0x100bfca4
100bfcc0:	33 c0                	xor    eax,eax
100bfcc2:	eb 05                	jmp    0x100bfcc9
100bfcc4:	1b c0                	sbb    eax,eax
100bfcc6:	83 c8 01             	or     eax,0x1
100bfcc9:	85 c0                	test   eax,eax
100bfccb:	0f 85 cc 00 00 00    	jne    0x100bfd9d
100bfcd1:	8d 9f 84 01 00 00    	lea    ebx,[edi+0x184]
100bfcd7:	8b cb                	mov    ecx,ebx
100bfcd9:	e8 a2 7a f5 ff       	call   0x10017780
100bfcde:	85 c0                	test   eax,eax
100bfce0:	0f 85 b7 00 00 00    	jne    0x100bfd9d
100bfce6:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bfce9:	0f 57 c9             	xorps  xmm1,xmm1
100bfcec:	f3 0f 10 80 68 01 00 	movss  xmm0,DWORD PTR [eax+0x168]
100bfcf3:	00 
100bfcf4:	0f 2e c1             	ucomiss xmm0,xmm1
100bfcf7:	9f                   	lahf
100bfcf8:	f6 c4 44             	test   ah,0x44
100bfcfb:	0f 8a 9c 00 00 00    	jp     0x100bfd9d
100bfd01:	e8 6a a7 04 00       	call   0x1010a470
100bfd06:	50                   	push   eax
100bfd07:	6a 01                	push   0x1
100bfd09:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100bfd0f:	50                   	push   eax
100bfd10:	e8 6b 99 05 00       	call   0x10119680
100bfd15:	83 c4 0c             	add    esp,0xc
100bfd18:	89 85 68 fe ff ff    	mov    DWORD PTR [ebp-0x198],eax
100bfd1e:	85 c0                	test   eax,eax
100bfd20:	74 7b                	je     0x100bfd9d
100bfd22:	8b cb                	mov    ecx,ebx
100bfd24:	e8 57 7a f5 ff       	call   0x10017780
100bfd29:	85 c0                	test   eax,eax
100bfd2b:	75 70                	jne    0x100bfd9d
100bfd2d:	ff b5 68 fe ff ff    	push   DWORD PTR [ebp-0x198]
100bfd33:	8b cb                	mov    ecx,ebx
100bfd35:	e8 06 7a f5 ff       	call   0x10017740
100bfd3a:	8d b7 f4 02 00 00    	lea    esi,[edi+0x2f4]
100bfd40:	8b cb                	mov    ecx,ebx
100bfd42:	56                   	push   esi
100bfd43:	e8 48 7a f5 ff       	call   0x10017790
100bfd48:	50                   	push   eax
100bfd49:	8b cf                	mov    ecx,edi
100bfd4b:	e8 20 19 00 00       	call   0x100c1670
100bfd50:	ff b5 68 fe ff ff    	push   DWORD PTR [ebp-0x198]
100bfd56:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x10000
100bfd5d:	00 01 00 
100bfd60:	8b cb                	mov    ecx,ebx
100bfd62:	e8 d9 79 f5 ff       	call   0x10017740
100bfd67:	8b cb                	mov    ecx,ebx
100bfd69:	e8 32 7a f5 ff       	call   0x100177a0
100bfd6e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100bfd71:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100bfd76:	66 0f d6 06          	movq   QWORD PTR [esi],xmm0
100bfd7a:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100bfd7d:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x200000
100bfd84:	00 20 00 
100bfd87:	5f                   	pop    edi
100bfd88:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
100bfd8b:	5e                   	pop    esi
100bfd8c:	5b                   	pop    ebx
100bfd8d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100bfd90:	33 cd                	xor    ecx,ebp
100bfd92:	e8 1c de 07 00       	call   0x1013dbb3
100bfd97:	8b e5                	mov    esp,ebp
100bfd99:	5d                   	pop    ebp
100bfd9a:	c2 04 00             	ret    0x4
100bfd9d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bfda0:	f6 80 a4 01 00 00 10 	test   BYTE PTR [eax+0x1a4],0x10
100bfda7:	0f 85 0e 03 00 00    	jne    0x100c00bb
100bfdad:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
100bfdb2:	f3 0f 10 48 10       	movss  xmm1,DWORD PTR [eax+0x10]
100bfdb7:	66 0f 6e 5d 08       	movd   xmm3,DWORD PTR [ebp+0x8]
100bfdbc:	0f 5b db             	cvtdq2ps xmm3,xmm3
100bfdbf:	6a 28                	push   0x28
100bfdc1:	0f 28 c3             	movaps xmm0,xmm3
100bfdc4:	f3 0f 58 d3          	addss  xmm2,xmm3
100bfdc8:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
100bfdcd:	f3 0f 58 cb          	addss  xmm1,xmm3
100bfdd1:	f3 0f 11 95 50 fe ff 	movss  DWORD PTR [ebp-0x1b0],xmm2
100bfdd8:	ff 
100bfdd9:	f3 0f 11 85 4c fe ff 	movss  DWORD PTR [ebp-0x1b4],xmm0
100bfde0:	ff 
100bfde1:	f3 0f 11 8d 54 fe ff 	movss  DWORD PTR [ebp-0x1ac],xmm1
100bfde8:	ff 
100bfde9:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
100bfdee:	f3 0f 10 48 10       	movss  xmm1,DWORD PTR [eax+0x10]
100bfdf3:	f3 0f 5c d3          	subss  xmm2,xmm3
100bfdf7:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100bfdfc:	f3 0f 5c cb          	subss  xmm1,xmm3
100bfe00:	8d 85 4c fe ff ff    	lea    eax,[ebp-0x1b4]
100bfe06:	50                   	push   eax
100bfe07:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
100bfe0d:	50                   	push   eax
100bfe0e:	f3 0f 5c c3          	subss  xmm0,xmm3
100bfe12:	f3 0f 11 95 44 fe ff 	movss  DWORD PTR [ebp-0x1bc],xmm2
100bfe19:	ff 
100bfe1a:	8d 85 6c fe ff ff    	lea    eax,[ebp-0x194]
100bfe20:	f3 0f 11 8d 48 fe ff 	movss  DWORD PTR [ebp-0x1b8],xmm1
100bfe27:	ff 
100bfe28:	6a 64                	push   0x64
100bfe2a:	50                   	push   eax
100bfe2b:	f3 0f 11 85 40 fe ff 	movss  DWORD PTR [ebp-0x1c0],xmm0
100bfe32:	ff 
100bfe33:	e8 58 85 05 00       	call   0x10118390
100bfe38:	83 c4 14             	add    esp,0x14
100bfe3b:	89 85 68 fe ff ff    	mov    DWORD PTR [ebp-0x198],eax
100bfe41:	89 b5 60 fe ff ff    	mov    DWORD PTR [ebp-0x1a0],esi
100bfe47:	85 c0                	test   eax,eax
100bfe49:	0f 8e 6c 02 00 00    	jle    0x100c00bb
100bfe4f:	33 f6                	xor    esi,esi
100bfe51:	8b b4 b5 6c fe ff ff 	mov    esi,DWORD PTR [ebp+esi*4-0x194]
100bfe58:	3b f7                	cmp    esi,edi
100bfe5a:	0f 84 40 02 00 00    	je     0x100c00a0
100bfe60:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100bfe63:	f6 82 a4 01 00 00 10 	test   BYTE PTR [edx+0x1a4],0x10
100bfe6a:	0f 85 30 02 00 00    	jne    0x100c00a0
100bfe70:	f3 0f 10 82 64 01 00 	movss  xmm0,DWORD PTR [edx+0x164]
100bfe77:	00 
100bfe78:	0f 57 c9             	xorps  xmm1,xmm1
100bfe7b:	0f 2f c1             	comiss xmm0,xmm1
100bfe7e:	0f 86 1c 02 00 00    	jbe    0x100c00a0
100bfe84:	8b 82 f8 01 00 00    	mov    eax,DWORD PTR [edx+0x1f8]
100bfe8a:	89 85 5c fe ff ff    	mov    DWORD PTR [ebp-0x1a4],eax
100bfe90:	85 c0                	test   eax,eax
100bfe92:	0f 84 95 00 00 00    	je     0x100bff2d
100bfe98:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bfe9b:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
100bfea1:	89 85 58 fe ff ff    	mov    DWORD PTR [ebp-0x1a8],eax
100bfea7:	85 c0                	test   eax,eax
100bfea9:	0f 84 7e 00 00 00    	je     0x100bff2d
100bfeaf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bfeb4:	b9 0c 4e 1d 10       	mov    ecx,0x101d4e0c
100bfeb9:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
100bfebf:	8b 02                	mov    eax,DWORD PTR [edx]
100bfec1:	03 c3                	add    eax,ebx
100bfec3:	8a 10                	mov    dl,BYTE PTR [eax]
100bfec5:	3a 11                	cmp    dl,BYTE PTR [ecx]
100bfec7:	75 1a                	jne    0x100bfee3
100bfec9:	84 d2                	test   dl,dl
100bfecb:	74 12                	je     0x100bfedf
100bfecd:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100bfed0:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100bfed3:	75 0e                	jne    0x100bfee3
100bfed5:	83 c0 02             	add    eax,0x2
100bfed8:	83 c1 02             	add    ecx,0x2
100bfedb:	84 d2                	test   dl,dl
100bfedd:	75 e4                	jne    0x100bfec3
100bfedf:	33 c0                	xor    eax,eax
100bfee1:	eb 05                	jmp    0x100bfee8
100bfee3:	1b c0                	sbb    eax,eax
100bfee5:	83 c8 01             	or     eax,0x1
100bfee8:	85 c0                	test   eax,eax
100bfeea:	75 41                	jne    0x100bff2d
100bfeec:	8b 8d 5c fe ff ff    	mov    ecx,DWORD PTR [ebp-0x1a4]
100bfef2:	8b 85 58 fe ff ff    	mov    eax,DWORD PTR [ebp-0x1a8]
100bfef8:	03 cb                	add    ecx,ebx
100bfefa:	03 c3                	add    eax,ebx
100bfefc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100bff00:	8a 10                	mov    dl,BYTE PTR [eax]
100bff02:	3a 11                	cmp    dl,BYTE PTR [ecx]
100bff04:	75 1a                	jne    0x100bff20
100bff06:	84 d2                	test   dl,dl
100bff08:	74 12                	je     0x100bff1c
100bff0a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100bff0d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100bff10:	75 0e                	jne    0x100bff20
100bff12:	83 c0 02             	add    eax,0x2
100bff15:	83 c1 02             	add    ecx,0x2
100bff18:	84 d2                	test   dl,dl
100bff1a:	75 e4                	jne    0x100bff00
100bff1c:	33 c0                	xor    eax,eax
100bff1e:	eb 05                	jmp    0x100bff25
100bff20:	1b c0                	sbb    eax,eax
100bff22:	83 c8 01             	or     eax,0x1
100bff25:	85 c0                	test   eax,eax
100bff27:	0f 85 6d 01 00 00    	jne    0x100c009a
100bff2d:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100bff33:	32 db                	xor    bl,bl
100bff35:	85 c9                	test   ecx,ecx
100bff37:	74 23                	je     0x100bff5c
100bff39:	8b 01                	mov    eax,DWORD PTR [ecx]
100bff3b:	ff 50 20             	call   DWORD PTR [eax+0x20]
100bff3e:	85 c0                	test   eax,eax
100bff40:	74 1a                	je     0x100bff5c
100bff42:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bff45:	f3 0f 10 80 60 02 00 	movss  xmm0,DWORD PTR [eax+0x260]
100bff4c:	00 
100bff4d:	0f 2e 05 a0 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1ea0
100bff54:	9f                   	lahf
100bff55:	f6 c4 44             	test   ah,0x44
100bff58:	7a 02                	jp     0x100bff5c
100bff5a:	b3 01                	mov    bl,0x1
100bff5c:	8b 07                	mov    eax,DWORD PTR [edi]
100bff5e:	8b cf                	mov    ecx,edi
100bff60:	56                   	push   esi
100bff61:	ff 90 38 01 00 00    	call   DWORD PTR [eax+0x138]
100bff67:	85 c0                	test   eax,eax
100bff69:	0f 84 2b 01 00 00    	je     0x100c009a
100bff6f:	8b 07                	mov    eax,DWORD PTR [edi]
100bff71:	8b cf                	mov    ecx,edi
100bff73:	56                   	push   esi
100bff74:	ff 90 54 01 00 00    	call   DWORD PTR [eax+0x154]
100bff7a:	85 c0                	test   eax,eax
100bff7c:	0f 84 18 01 00 00    	je     0x100c009a
100bff82:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bff85:	f6 80 a8 01 00 00 80 	test   BYTE PTR [eax+0x1a8],0x80
100bff8c:	0f 85 08 01 00 00    	jne    0x100c009a
100bff92:	8b 07                	mov    eax,DWORD PTR [edi]
100bff94:	8b cf                	mov    ecx,edi
100bff96:	56                   	push   esi
100bff97:	ff 90 14 01 00 00    	call   DWORD PTR [eax+0x114]
100bff9d:	85 c0                	test   eax,eax
100bff9f:	0f 84 f5 00 00 00    	je     0x100c009a
100bffa5:	84 db                	test   bl,bl
100bffa7:	0f 85 ed 00 00 00    	jne    0x100c009a
100bffad:	8b 06                	mov    eax,DWORD PTR [esi]
100bffaf:	8b ce                	mov    ecx,esi
100bffb1:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
100bffb7:	85 c0                	test   eax,eax
100bffb9:	74 44                	je     0x100bffff
100bffbb:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bffbe:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100bffc5:	74 24                	je     0x100bffeb
100bffc7:	8b 06                	mov    eax,DWORD PTR [esi]
100bffc9:	8b ce                	mov    ecx,esi
100bffcb:	ff 50 78             	call   DWORD PTR [eax+0x78]
100bffce:	57                   	push   edi
100bffcf:	8b c8                	mov    ecx,eax
100bffd1:	8b 10                	mov    edx,DWORD PTR [eax]
100bffd3:	ff 92 54 01 00 00    	call   DWORD PTR [edx+0x154]
100bffd9:	85 c0                	test   eax,eax
100bffdb:	0f 84 b9 00 00 00    	je     0x100c009a
100bffe1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bffe4:	83 a0 a4 01 00 00 fe 	and    DWORD PTR [eax+0x1a4],0xfffffffe
100bffeb:	8b 9d 64 fe ff ff    	mov    ebx,DWORD PTR [ebp-0x19c]
100bfff1:	81 cb 00 00 20 00    	or     ebx,0x200000
100bfff7:	89 9d 64 fe ff ff    	mov    DWORD PTR [ebp-0x19c],ebx
100bfffd:	eb 06                	jmp    0x100c0005
100bffff:	8b 9d 64 fe ff ff    	mov    ebx,DWORD PTR [ebp-0x19c]
100c0005:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
100c0008:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100c000e:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
100c0011:	89 77 10             	mov    DWORD PTR [edi+0x10],esi
100c0014:	e8 77 77 f5 ff       	call   0x10017790
100c0019:	3b f0                	cmp    esi,eax
100c001b:	75 09                	jne    0x100c0026
100c001d:	83 cb 10             	or     ebx,0x10
100c0020:	89 9d 64 fe ff ff    	mov    DWORD PTR [ebp-0x19c],ebx
100c0026:	8b 07                	mov    eax,DWORD PTR [edi]
100c0028:	8b cf                	mov    ecx,edi
100c002a:	56                   	push   esi
100c002b:	ff 90 38 01 00 00    	call   DWORD PTR [eax+0x138]
100c0031:	83 c0 02             	add    eax,0x2
100c0034:	83 f8 05             	cmp    eax,0x5
100c0037:	77 36                	ja     0x100c006f
100c0039:	ff 24 85 d4 00 0c 10 	jmp    DWORD PTR [eax*4+0x100c00d4]
100c0040:	81 cb 00 00 40 00    	or     ebx,0x400000
100c0046:	89 9d 64 fe ff ff    	mov    DWORD PTR [ebp-0x19c],ebx
100c004c:	eb 4c                	jmp    0x100c009a
100c004e:	83 cb 02             	or     ebx,0x2
100c0051:	89 9d 64 fe ff ff    	mov    DWORD PTR [ebp-0x19c],ebx
100c0057:	eb 41                	jmp    0x100c009a
100c0059:	83 cb 08             	or     ebx,0x8
100c005c:	89 9d 64 fe ff ff    	mov    DWORD PTR [ebp-0x19c],ebx
100c0062:	eb 36                	jmp    0x100c009a
100c0064:	83 cb 04             	or     ebx,0x4
100c0067:	89 9d 64 fe ff ff    	mov    DWORD PTR [ebp-0x19c],ebx
100c006d:	eb 2b                	jmp    0x100c009a
100c006f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0074:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100c007a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c007d:	8b 00                	mov    eax,DWORD PTR [eax]
100c007f:	03 c1                	add    eax,ecx
100c0081:	50                   	push   eax
100c0082:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c0085:	8b 00                	mov    eax,DWORD PTR [eax]
100c0087:	03 c1                	add    eax,ecx
100c0089:	50                   	push   eax
100c008a:	68 1c 4e 1d 10       	push   0x101d4e1c
100c008f:	6a 02                	push   0x2
100c0091:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c0097:	83 c4 10             	add    esp,0x10
100c009a:	8b 85 68 fe ff ff    	mov    eax,DWORD PTR [ebp-0x198]
100c00a0:	8b b5 60 fe ff ff    	mov    esi,DWORD PTR [ebp-0x1a0]
100c00a6:	46                   	inc    esi
100c00a7:	89 b5 60 fe ff ff    	mov    DWORD PTR [ebp-0x1a0],esi
100c00ad:	3b f0                	cmp    esi,eax
100c00af:	0f 8c 9c fd ff ff    	jl     0x100bfe51
100c00b5:	8b b5 64 fe ff ff    	mov    esi,DWORD PTR [ebp-0x19c]
100c00bb:	09 b7 80 01 00 00    	or     DWORD PTR [edi+0x180],esi
100c00c1:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100c00c4:	5f                   	pop    edi
100c00c5:	5e                   	pop    esi
100c00c6:	33 cd                	xor    ecx,ebp
100c00c8:	5b                   	pop    ebx
100c00c9:	e8 e5 da 07 00       	call   0x1013dbb3
100c00ce:	8b e5                	mov    esp,ebp
100c00d0:	5d                   	pop    ebp
100c00d1:	c2 04 00             	ret    0x4
