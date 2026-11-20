
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002c100 <.text+0x2b100>:
1002c100:	55                   	push   ebp
1002c101:	8b ec                	mov    ebp,esp
1002c103:	51                   	push   ecx
1002c104:	56                   	push   esi
1002c105:	8b f1                	mov    esi,ecx
1002c107:	8b 8e 00 01 00 00    	mov    ecx,DWORD PTR [esi+0x100]
1002c10d:	85 c9                	test   ecx,ecx
1002c10f:	7e 1e                	jle    0x1002c12f
1002c111:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c114:	66 0f 6e c1          	movd   xmm0,ecx
1002c118:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1002c11b:	f3 0f 58 40 10       	addss  xmm0,DWORD PTR [eax+0x10]
1002c120:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
1002c125:	c7 86 00 01 00 00 00 	mov    DWORD PTR [esi+0x100],0x0
1002c12c:	00 00 00 
1002c12f:	8b 86 8c 01 00 00    	mov    eax,DWORD PTR [esi+0x18c]
1002c135:	b9 20 ca 1a 10       	mov    ecx,0x101aca20
1002c13a:	53                   	push   ebx
1002c13b:	57                   	push   edi
1002c13c:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
1002c142:	8b 9c 86 04 01 00 00 	mov    ebx,DWORD PTR [esi+eax*4+0x104]
1002c149:	8b 87 98 00 00 00    	mov    eax,DWORD PTR [edi+0x98]
1002c14f:	03 c3                	add    eax,ebx
1002c151:	8a 10                	mov    dl,BYTE PTR [eax]
1002c153:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002c155:	75 1a                	jne    0x1002c171
1002c157:	84 d2                	test   dl,dl
1002c159:	74 12                	je     0x1002c16d
1002c15b:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002c15e:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002c161:	75 0e                	jne    0x1002c171
1002c163:	83 c0 02             	add    eax,0x2
1002c166:	83 c1 02             	add    ecx,0x2
1002c169:	84 d2                	test   dl,dl
1002c16b:	75 e4                	jne    0x1002c151
1002c16d:	33 c0                	xor    eax,eax
1002c16f:	eb 05                	jmp    0x1002c176
1002c171:	1b c0                	sbb    eax,eax
1002c173:	83 c8 01             	or     eax,0x1
1002c176:	85 c0                	test   eax,eax
1002c178:	75 1d                	jne    0x1002c197
1002c17a:	8b 9e 8c 01 00 00    	mov    ebx,DWORD PTR [esi+0x18c]
1002c180:	c7 86 00 01 00 00 30 	mov    DWORD PTR [esi+0x100],0x30
1002c187:	00 00 00 
1002c18a:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
1002c190:	8b 9c 9e 04 01 00 00 	mov    ebx,DWORD PTR [esi+ebx*4+0x104]
1002c197:	8b 87 98 00 00 00    	mov    eax,DWORD PTR [edi+0x98]
1002c19d:	8b ce                	mov    ecx,esi
1002c19f:	03 c3                	add    eax,ebx
1002c1a1:	50                   	push   eax
1002c1a2:	e8 09 fe ff ff       	call   0x1002bfb0
1002c1a7:	8b 8e 8c 01 00 00    	mov    ecx,DWORD PTR [esi+0x18c]
1002c1ad:	5f                   	pop    edi
1002c1ae:	5b                   	pop    ebx
1002c1af:	3b 8e 88 01 00 00    	cmp    ecx,DWORD PTR [esi+0x188]
1002c1b5:	7d 6b                	jge    0x1002c222
1002c1b7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1002c1bc:	8b 8c 8e 04 01 00 00 	mov    ecx,DWORD PTR [esi+ecx*4+0x104]
1002c1c3:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1002c1c9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1002c1cc:	51                   	push   ecx
1002c1cd:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1002c1d3:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1002c1d9:	83 c4 04             	add    esp,0x4
1002c1dc:	50                   	push   eax
1002c1dd:	e8 fe 31 fe ff       	call   0x1000f3e0
1002c1e2:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1002c1e5:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1002c1ea:	83 c4 08             	add    esp,0x8
1002c1ed:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1002c1f4:	9f                   	lahf
1002c1f5:	f6 c4 44             	test   ah,0x44
1002c1f8:	7b 18                	jnp    0x1002c212
1002c1fa:	8b 06                	mov    eax,DWORD PTR [esi]
1002c1fc:	51                   	push   ecx
1002c1fd:	8b ce                	mov    ecx,esi
1002c1ff:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1002c204:	ff 50 08             	call   DWORD PTR [eax+0x8]
1002c207:	ff 86 8c 01 00 00    	inc    DWORD PTR [esi+0x18c]
1002c20d:	5e                   	pop    esi
1002c20e:	8b e5                	mov    esp,ebp
1002c210:	5d                   	pop    ebp
1002c211:	c3                   	ret
1002c212:	68 20 a1 1a 10       	push   0x101aa120
1002c217:	6a 01                	push   0x1
1002c219:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1002c21f:	83 c4 08             	add    esp,0x8
1002c222:	ff 86 8c 01 00 00    	inc    DWORD PTR [esi+0x18c]
1002c228:	5e                   	pop    esi
1002c229:	8b e5                	mov    esp,ebp
1002c22b:	5d                   	pop    ebp
1002c22c:	c3                   	ret
