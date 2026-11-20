
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f020 <.text+0xe020>:
1000f020:	55                   	push   ebp
1000f021:	8b ec                	mov    ebp,esp
1000f023:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1000f026:	53                   	push   ebx
1000f027:	56                   	push   esi
1000f028:	57                   	push   edi
1000f029:	85 c9                	test   ecx,ecx
1000f02b:	0f 84 f3 00 00 00    	je     0x1000f124
1000f031:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000f034:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
1000f03a:	3b 81 a4 00 00 00    	cmp    eax,DWORD PTR [ecx+0xa4]
1000f040:	0f 8d de 00 00 00    	jge    0x1000f124
1000f046:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
1000f04a:	0f 84 d4 00 00 00    	je     0x1000f124
1000f050:	69 f0 b0 00 00 00    	imul   esi,eax,0xb0
1000f056:	03 b1 a8 00 00 00    	add    esi,DWORD PTR [ecx+0xa8]
1000f05c:	03 f1                	add    esi,ecx
1000f05e:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1000f061:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
1000f064:	03 c1                	add    eax,ecx
1000f066:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000f069:	85 d2                	test   edx,edx
1000f06b:	0f 84 b3 00 00 00    	je     0x1000f124
1000f071:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
1000f074:	3b ca                	cmp    ecx,edx
1000f076:	0f 8f a8 00 00 00    	jg     0x1000f124
1000f07c:	8b 5e 38             	mov    ebx,DWORD PTR [esi+0x38]
1000f07f:	f3 0f 10 25 90 13 1a 	movss  xmm4,DWORD PTR ds:0x101a1390
1000f086:	10 
1000f087:	83 fb 01             	cmp    ebx,0x1
1000f08a:	7e 38                	jle    0x1000f0c4
1000f08c:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1000f091:	8d 43 ff             	lea    eax,[ebx-0x1]
1000f094:	66 0f 6e c8          	movd   xmm1,eax
1000f098:	f3 0f e6 c9          	cvtdq2pd xmm1,xmm1
1000f09c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000f09f:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000f0a2:	f2 0f 59 0d 68 2e 1a 	mulsd  xmm1,QWORD PTR ds:0x101a2e68
1000f0a9:	10 
1000f0aa:	f2 0f 59 c1          	mulsd  xmm0,xmm1
1000f0ae:	66 0f 5a e8          	cvtpd2ps xmm5,xmm0
1000f0b2:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
1000f0b7:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000f0ba:	f2 0f 59 c1          	mulsd  xmm0,xmm1
1000f0be:	66 0f 5a d8          	cvtpd2ps xmm3,xmm0
1000f0c2:	eb 06                	jmp    0x1000f0ca
1000f0c4:	0f 57 ed             	xorps  xmm5,xmm5
1000f0c7:	0f 28 dc             	movaps xmm3,xmm4
1000f0ca:	3b ca                	cmp    ecx,edx
1000f0cc:	7d 56                	jge    0x1000f124
1000f0ce:	6b d1 4c             	imul   edx,ecx,0x4c
1000f0d1:	03 d0                	add    edx,eax
1000f0d3:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
1000f0d6:	81 ff 88 13 00 00    	cmp    edi,0x1388
1000f0dc:	7d 3d                	jge    0x1000f11b
1000f0de:	66 0f 6e 12          	movd   xmm2,DWORD PTR [edx]
1000f0e2:	0f 5b d2             	cvtdq2ps xmm2,xmm2
1000f0e5:	0f 2f d5             	comiss xmm2,xmm5
1000f0e8:	72 05                	jb     0x1000f0ef
1000f0ea:	0f 2f da             	comiss xmm3,xmm2
1000f0ed:	77 3c                	ja     0x1000f12b
1000f0ef:	f6 46 24 01          	test   BYTE PTR [esi+0x24],0x1
1000f0f3:	74 26                	je     0x1000f11b
1000f0f5:	8d 43 ff             	lea    eax,[ebx-0x1]
1000f0f8:	66 0f 6e c0          	movd   xmm0,eax
1000f0fc:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1000f0ff:	0f 2f d8             	comiss xmm3,xmm0
1000f102:	72 17                	jb     0x1000f11b
1000f104:	66 0f 6e c3          	movd   xmm0,ebx
1000f108:	0f 28 cb             	movaps xmm1,xmm3
1000f10b:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1000f10e:	f3 0f 5c c8          	subss  xmm1,xmm0
1000f112:	f3 0f 58 cc          	addss  xmm1,xmm4
1000f116:	0f 2f ca             	comiss xmm1,xmm2
1000f119:	77 10                	ja     0x1000f12b
1000f11b:	41                   	inc    ecx
1000f11c:	83 c2 4c             	add    edx,0x4c
1000f11f:	3b 4e 30             	cmp    ecx,DWORD PTR [esi+0x30]
1000f122:	7c af                	jl     0x1000f0d3
1000f124:	5f                   	pop    edi
1000f125:	5e                   	pop    esi
1000f126:	33 c0                	xor    eax,eax
1000f128:	5b                   	pop    ebx
1000f129:	5d                   	pop    ebp
1000f12a:	c3                   	ret
1000f12b:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
1000f12e:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1000f131:	6b c1 4c             	imul   eax,ecx,0x4c
1000f134:	83 c2 0c             	add    edx,0xc
1000f137:	89 3b                	mov    DWORD PTR [ebx],edi
1000f139:	5f                   	pop    edi
1000f13a:	5e                   	pop    esi
1000f13b:	03 c2                	add    eax,edx
1000f13d:	89 43 04             	mov    DWORD PTR [ebx+0x4],eax
1000f140:	8d 41 01             	lea    eax,[ecx+0x1]
1000f143:	5b                   	pop    ebx
1000f144:	5d                   	pop    ebp
1000f145:	c3                   	ret
