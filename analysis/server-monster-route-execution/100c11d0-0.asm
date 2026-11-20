
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c11d0 <.text+0xc01d0>:
100c11d0:	55                   	push   ebp
100c11d1:	8b ec                	mov    ebp,esp
100c11d3:	83 ec 08             	sub    esp,0x8
100c11d6:	56                   	push   esi
100c11d7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c11da:	57                   	push   edi
100c11db:	8b f9                	mov    edi,ecx
100c11dd:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100c11e4:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
100c11e7:	8b 86 0c 02 00 00    	mov    eax,DWORD PTR [esi+0x20c]
100c11ed:	85 c0                	test   eax,eax
100c11ef:	75 12                	jne    0x100c1203
100c11f1:	50                   	push   eax
100c11f2:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100c11f8:	83 c4 04             	add    esp,0x4
100c11fb:	85 c0                	test   eax,eax
100c11fd:	0f 84 f8 00 00 00    	je     0x100c12fb
100c1203:	53                   	push   ebx
100c1204:	8b 58 7c             	mov    ebx,DWORD PTR [eax+0x7c]
100c1207:	85 db                	test   ebx,ebx
100c1209:	0f 84 eb 00 00 00    	je     0x100c12fa
100c120f:	8b 03                	mov    eax,DWORD PTR [ebx]
100c1211:	51                   	push   ecx
100c1212:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100c1219:	8b cb                	mov    ecx,ebx
100c121b:	6a 01                	push   0x1
100c121d:	57                   	push   edi
100c121e:	57                   	push   edi
100c121f:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100c1225:	f3 0f 10 43 58       	movss  xmm0,DWORD PTR [ebx+0x58]
100c122a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100c122d:	f3 0f 5c 86 00 01 00 	subss  xmm0,DWORD PTR [esi+0x100]
100c1234:	00 
100c1235:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
100c123b:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100c1240:	85 c9                	test   ecx,ecx
100c1242:	0f 84 b2 00 00 00    	je     0x100c12fa
100c1248:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c124d:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c1253:	03 c1                	add    eax,ecx
100c1255:	50                   	push   eax
100c1256:	6a 00                	push   0x0
100c1258:	e8 33 73 05 00       	call   0x10118590
100c125d:	8b f8                	mov    edi,eax
100c125f:	83 c4 08             	add    esp,0x8
100c1262:	85 ff                	test   edi,edi
100c1264:	0f 84 90 00 00 00    	je     0x100c12fa
100c126a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100c1270:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100c1273:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
100c1276:	3b ce                	cmp    ecx,esi
100c1278:	74 5b                	je     0x100c12d5
100c127a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c127f:	8b 16                	mov    edx,DWORD PTR [esi]
100c1281:	8b 09                	mov    ecx,DWORD PTR [ecx]
100c1283:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c1289:	03 d0                	add    edx,eax
100c128b:	03 c8                	add    ecx,eax
100c128d:	0f 1f 00             	nop    DWORD PTR [eax]
100c1290:	8a 01                	mov    al,BYTE PTR [ecx]
100c1292:	3a 02                	cmp    al,BYTE PTR [edx]
100c1294:	75 1a                	jne    0x100c12b0
100c1296:	84 c0                	test   al,al
100c1298:	74 12                	je     0x100c12ac
100c129a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c129d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100c12a0:	75 0e                	jne    0x100c12b0
100c12a2:	83 c1 02             	add    ecx,0x2
100c12a5:	83 c2 02             	add    edx,0x2
100c12a8:	84 c0                	test   al,al
100c12aa:	75 e4                	jne    0x100c1290
100c12ac:	33 c0                	xor    eax,eax
100c12ae:	eb 05                	jmp    0x100c12b5
100c12b0:	1b c0                	sbb    eax,eax
100c12b2:	83 c8 01             	or     eax,0x1
100c12b5:	85 c0                	test   eax,eax
100c12b7:	75 1c                	jne    0x100c12d5
100c12b9:	8b 07                	mov    eax,DWORD PTR [edi]
100c12bb:	51                   	push   ecx
100c12bc:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100c12bf:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100c12c6:	6a 01                	push   0x1
100c12c8:	51                   	push   ecx
100c12c9:	51                   	push   ecx
100c12ca:	8b cf                	mov    ecx,edi
100c12cc:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100c12d2:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
100c12d5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c12da:	8b 8e d0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1d0]
100c12e0:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100c12e6:	51                   	push   ecx
100c12e7:	57                   	push   edi
100c12e8:	e8 a3 72 05 00       	call   0x10118590
100c12ed:	8b f8                	mov    edi,eax
100c12ef:	83 c4 08             	add    esp,0x8
100c12f2:	85 ff                	test   edi,edi
100c12f4:	0f 85 76 ff ff ff    	jne    0x100c1270
100c12fa:	5b                   	pop    ebx
100c12fb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c1300:	d9 45 fc             	fld    DWORD PTR [ebp-0x4]
100c1303:	5f                   	pop    edi
100c1304:	5e                   	pop    esi
100c1305:	d8 00                	fadd   DWORD PTR [eax]
100c1307:	8b e5                	mov    esp,ebp
100c1309:	5d                   	pop    ebp
100c130a:	c2 04 00             	ret    0x4
