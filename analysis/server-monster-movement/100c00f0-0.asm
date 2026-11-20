
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c00f0 <.text+0xbf0f0>:
100c00f0:	55                   	push   ebp
100c00f1:	8b ec                	mov    ebp,esp
100c00f3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c00f8:	83 ec 0c             	sub    esp,0xc
100c00fb:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100c0101:	56                   	push   esi
100c0102:	57                   	push   edi
100c0103:	8b f9                	mov    edi,ecx
100c0105:	be b4 4e 1d 10       	mov    esi,0x101d4eb4
100c010a:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100c010d:	03 11                	add    edx,DWORD PTR [ecx]
100c010f:	8b c2                	mov    eax,edx
100c0111:	8a 08                	mov    cl,BYTE PTR [eax]
100c0113:	3a 0e                	cmp    cl,BYTE PTR [esi]
100c0115:	75 1a                	jne    0x100c0131
100c0117:	84 c9                	test   cl,cl
100c0119:	74 12                	je     0x100c012d
100c011b:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100c011e:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100c0121:	75 0e                	jne    0x100c0131
100c0123:	83 c0 02             	add    eax,0x2
100c0126:	83 c6 02             	add    esi,0x2
100c0129:	84 c9                	test   cl,cl
100c012b:	75 e4                	jne    0x100c0111
100c012d:	33 c0                	xor    eax,eax
100c012f:	eb 05                	jmp    0x100c0136
100c0131:	1b c0                	sbb    eax,eax
100c0133:	83 c8 01             	or     eax,0x1
100c0136:	85 c0                	test   eax,eax
100c0138:	0f 84 af 00 00 00    	je     0x100c01ed
100c013e:	80 7f 09 00          	cmp    BYTE PTR [edi+0x9],0x0
100c0142:	0f 85 a5 00 00 00    	jne    0x100c01ed
100c0148:	b8 f0 0d 1b 10       	mov    eax,0x101b0df0
100c014d:	0f 1f 00             	nop    DWORD PTR [eax]
100c0150:	8a 0a                	mov    cl,BYTE PTR [edx]
100c0152:	3a 08                	cmp    cl,BYTE PTR [eax]
100c0154:	75 1a                	jne    0x100c0170
100c0156:	84 c9                	test   cl,cl
100c0158:	74 12                	je     0x100c016c
100c015a:	8a 4a 01             	mov    cl,BYTE PTR [edx+0x1]
100c015d:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
100c0160:	75 0e                	jne    0x100c0170
100c0162:	83 c2 02             	add    edx,0x2
100c0165:	83 c0 02             	add    eax,0x2
100c0168:	84 c9                	test   cl,cl
100c016a:	75 e4                	jne    0x100c0150
100c016c:	33 c0                	xor    eax,eax
100c016e:	eb 05                	jmp    0x100c0175
100c0170:	1b c0                	sbb    eax,eax
100c0172:	83 c8 01             	or     eax,0x1
100c0175:	85 c0                	test   eax,eax
100c0177:	74 74                	je     0x100c01ed
100c0179:	8b 87 d0 02 00 00    	mov    eax,DWORD PTR [edi+0x2d0]
100c017f:	83 f8 0b             	cmp    eax,0xb
100c0182:	75 13                	jne    0x100c0197
100c0184:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c0189:	f3 0f 10 55 08       	movss  xmm2,DWORD PTR [ebp+0x8]
100c018e:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
100c0195:	eb 1b                	jmp    0x100c01b2
100c0197:	83 f8 0c             	cmp    eax,0xc
100c019a:	75 0c                	jne    0x100c01a8
100c019c:	f3 0f 10 55 08       	movss  xmm2,DWORD PTR [ebp+0x8]
100c01a1:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c01a6:	eb 0a                	jmp    0x100c01b2
100c01a8:	f3 0f 10 55 0c       	movss  xmm2,DWORD PTR [ebp+0xc]
100c01ad:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100c01b2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c01b5:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
100c01ba:	f3 0f 5c 50 0c       	subss  xmm2,DWORD PTR [eax+0xc]
100c01bf:	f3 0f 5c 48 10       	subss  xmm1,DWORD PTR [eax+0x10]
100c01c4:	f3 0f 5c 40 08       	subss  xmm0,DWORD PTR [eax+0x8]
100c01c9:	8d 45 f4             	lea    eax,[ebp-0xc]
100c01cc:	50                   	push   eax
100c01cd:	f3 0f 11 55 f8       	movss  DWORD PTR [ebp-0x8],xmm2
100c01d2:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
100c01d7:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100c01dc:	e8 4f a7 05 00       	call   0x1011a930
100c01e1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c01e4:	83 c4 04             	add    esp,0x4
100c01e7:	d9 98 ac 00 00 00    	fstp   DWORD PTR [eax+0xac]
100c01ed:	5f                   	pop    edi
100c01ee:	5e                   	pop    esi
100c01ef:	8b e5                	mov    esp,ebp
100c01f1:	5d                   	pop    ebp
100c01f2:	c2 0c 00             	ret    0xc
