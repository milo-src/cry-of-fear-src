
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002a000 <.text+0x29000>:
1002a000:	55                   	push   ebp
1002a001:	8b ec                	mov    ebp,esp
1002a003:	83 ec 0c             	sub    esp,0xc
1002a006:	53                   	push   ebx
1002a007:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
1002a00d:	56                   	push   esi
1002a00e:	57                   	push   edi
1002a00f:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
1002a012:	81 c7 14 25 00 00    	add    edi,0x2514
1002a018:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
1002a01b:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
1002a022:	33 c0                	xor    eax,eax
1002a024:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
1002a027:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
1002a02e:	00 00 
1002a030:	8b 3f                	mov    edi,DWORD PTR [edi]
1002a032:	85 ff                	test   edi,edi
1002a034:	0f 84 c0 03 00 00    	je     0x1002a3fa
1002a03a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a03d:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
1002a042:	8b 00                	mov    eax,DWORD PTR [eax]
1002a044:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a04a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002a050:	8a 10                	mov    dl,BYTE PTR [eax]
1002a052:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002a054:	75 1a                	jne    0x1002a070
1002a056:	84 d2                	test   dl,dl
1002a058:	74 12                	je     0x1002a06c
1002a05a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002a05d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002a060:	75 0e                	jne    0x1002a070
1002a062:	83 c0 02             	add    eax,0x2
1002a065:	83 c1 02             	add    ecx,0x2
1002a068:	84 d2                	test   dl,dl
1002a06a:	75 e4                	jne    0x1002a050
1002a06c:	33 c0                	xor    eax,eax
1002a06e:	eb 05                	jmp    0x1002a075
1002a070:	1b c0                	sbb    eax,eax
1002a072:	83 c8 01             	or     eax,0x1
1002a075:	85 c0                	test   eax,eax
1002a077:	0f 84 7a 03 00 00    	je     0x1002a3f7
1002a07d:	0f 1f 00             	nop    DWORD PTR [eax]
1002a080:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a083:	8b 10                	mov    edx,DWORD PTR [eax]
1002a085:	03 93 98 00 00 00    	add    edx,DWORD PTR [ebx+0x98]
1002a08b:	0f 84 66 03 00 00    	je     0x1002a3f7
1002a091:	8b ca                	mov    ecx,edx
1002a093:	8d 71 01             	lea    esi,[ecx+0x1]
1002a096:	8a 01                	mov    al,BYTE PTR [ecx]
1002a098:	41                   	inc    ecx
1002a099:	84 c0                	test   al,al
1002a09b:	75 f9                	jne    0x1002a096
1002a09d:	2b ce                	sub    ecx,esi
1002a09f:	83 f9 01             	cmp    ecx,0x1
1002a0a2:	0f 86 4f 03 00 00    	jbe    0x1002a3f7
1002a0a8:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1002a0ab:	52                   	push   edx
1002a0ac:	e8 3f 55 11 00       	call   0x1013f5f0
1002a0b1:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
1002a0b7:	83 c4 08             	add    esp,0x8
1002a0ba:	85 c0                	test   eax,eax
1002a0bc:	0f 84 27 03 00 00    	je     0x1002a3e9
1002a0c2:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1002a0c5:	48                   	dec    eax
1002a0c6:	83 f8 05             	cmp    eax,0x5
1002a0c9:	0f 87 1a 03 00 00    	ja     0x1002a3e9
1002a0cf:	ff 24 85 64 a4 02 10 	jmp    DWORD PTR [eax*4+0x1002a464]
1002a0d6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1002a0d9:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
1002a0de:	8b 00                	mov    eax,DWORD PTR [eax]
1002a0e0:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002a0e3:	8b 00                	mov    eax,DWORD PTR [eax]
1002a0e5:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a0eb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1002a0f0:	8a 10                	mov    dl,BYTE PTR [eax]
1002a0f2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002a0f4:	75 1a                	jne    0x1002a110
1002a0f6:	84 d2                	test   dl,dl
1002a0f8:	74 12                	je     0x1002a10c
1002a0fa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002a0fd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002a100:	75 0e                	jne    0x1002a110
1002a102:	83 c0 02             	add    eax,0x2
1002a105:	83 c1 02             	add    ecx,0x2
1002a108:	84 d2                	test   dl,dl
1002a10a:	75 e4                	jne    0x1002a0f0
1002a10c:	33 c0                	xor    eax,eax
1002a10e:	eb 05                	jmp    0x1002a115
1002a110:	1b c0                	sbb    eax,eax
1002a112:	83 c8 01             	or     eax,0x1
1002a115:	85 c0                	test   eax,eax
1002a117:	0f 84 cc 02 00 00    	je     0x1002a3e9
1002a11d:	69 45 10 1c 04 00 00 	imul   eax,DWORD PTR [ebp+0x10],0x41c
1002a124:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1002a127:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1002a12a:	03 c8                	add    ecx,eax
1002a12c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a12f:	8b 00                	mov    eax,DWORD PTR [eax]
1002a131:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a137:	89 81 34 02 00 00    	mov    DWORD PTR [ecx+0x234],eax
1002a13d:	8b 87 e4 01 00 00    	mov    eax,DWORD PTR [edi+0x1e4]
1002a143:	89 81 38 02 00 00    	mov    DWORD PTR [ecx+0x238],eax
1002a149:	8b 87 dc 01 00 00    	mov    eax,DWORD PTR [edi+0x1dc]
1002a14f:	5f                   	pop    edi
1002a150:	5e                   	pop    esi
1002a151:	5b                   	pop    ebx
1002a152:	8b 84 82 40 25 00 00 	mov    eax,DWORD PTR [edx+eax*4+0x2540]
1002a159:	89 81 3c 02 00 00    	mov    DWORD PTR [ecx+0x23c],eax
1002a15f:	8b e5                	mov    esp,ebp
1002a161:	5d                   	pop    ebp
1002a162:	c2 10 00             	ret    0x10
1002a165:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1002a168:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
1002a16d:	8b 00                	mov    eax,DWORD PTR [eax]
1002a16f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002a172:	8b 00                	mov    eax,DWORD PTR [eax]
1002a174:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a17a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002a180:	8a 10                	mov    dl,BYTE PTR [eax]
1002a182:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002a184:	75 1a                	jne    0x1002a1a0
1002a186:	84 d2                	test   dl,dl
1002a188:	74 12                	je     0x1002a19c
1002a18a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002a18d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002a190:	75 0e                	jne    0x1002a1a0
1002a192:	83 c0 02             	add    eax,0x2
1002a195:	83 c1 02             	add    ecx,0x2
1002a198:	84 d2                	test   dl,dl
1002a19a:	75 e4                	jne    0x1002a180
1002a19c:	33 c0                	xor    eax,eax
1002a19e:	eb 05                	jmp    0x1002a1a5
1002a1a0:	1b c0                	sbb    eax,eax
1002a1a2:	83 c8 01             	or     eax,0x1
1002a1a5:	85 c0                	test   eax,eax
1002a1a7:	0f 84 3c 02 00 00    	je     0x1002a3e9
1002a1ad:	69 45 10 1c 04 00 00 	imul   eax,DWORD PTR [ebp+0x10],0x41c
1002a1b4:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1002a1b7:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1002a1ba:	03 c8                	add    ecx,eax
1002a1bc:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a1bf:	8b 00                	mov    eax,DWORD PTR [eax]
1002a1c1:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a1c7:	89 81 40 02 00 00    	mov    DWORD PTR [ecx+0x240],eax
1002a1cd:	8b 87 e4 01 00 00    	mov    eax,DWORD PTR [edi+0x1e4]
1002a1d3:	89 81 44 02 00 00    	mov    DWORD PTR [ecx+0x244],eax
1002a1d9:	8b 87 dc 01 00 00    	mov    eax,DWORD PTR [edi+0x1dc]
1002a1df:	5f                   	pop    edi
1002a1e0:	5e                   	pop    esi
1002a1e1:	5b                   	pop    ebx
1002a1e2:	8b 84 82 40 25 00 00 	mov    eax,DWORD PTR [edx+eax*4+0x2540]
1002a1e9:	89 81 48 02 00 00    	mov    DWORD PTR [ecx+0x248],eax
1002a1ef:	8b e5                	mov    esp,ebp
1002a1f1:	5d                   	pop    ebp
1002a1f2:	c2 10 00             	ret    0x10
1002a1f5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1002a1f8:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
1002a1fd:	8b 00                	mov    eax,DWORD PTR [eax]
1002a1ff:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002a202:	8b 00                	mov    eax,DWORD PTR [eax]
1002a204:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a20a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002a210:	8a 10                	mov    dl,BYTE PTR [eax]
1002a212:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002a214:	75 1a                	jne    0x1002a230
1002a216:	84 d2                	test   dl,dl
1002a218:	74 12                	je     0x1002a22c
1002a21a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002a21d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002a220:	75 0e                	jne    0x1002a230
1002a222:	83 c0 02             	add    eax,0x2
1002a225:	83 c1 02             	add    ecx,0x2
1002a228:	84 d2                	test   dl,dl
1002a22a:	75 e4                	jne    0x1002a210
1002a22c:	33 c0                	xor    eax,eax
1002a22e:	eb 05                	jmp    0x1002a235
1002a230:	1b c0                	sbb    eax,eax
1002a232:	83 c8 01             	or     eax,0x1
1002a235:	85 c0                	test   eax,eax
1002a237:	0f 84 ac 01 00 00    	je     0x1002a3e9
1002a23d:	69 45 10 1c 04 00 00 	imul   eax,DWORD PTR [ebp+0x10],0x41c
1002a244:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1002a247:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1002a24a:	03 c8                	add    ecx,eax
1002a24c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a24f:	8b 00                	mov    eax,DWORD PTR [eax]
1002a251:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a257:	89 81 4c 02 00 00    	mov    DWORD PTR [ecx+0x24c],eax
1002a25d:	8b 87 e4 01 00 00    	mov    eax,DWORD PTR [edi+0x1e4]
1002a263:	89 81 50 02 00 00    	mov    DWORD PTR [ecx+0x250],eax
1002a269:	8b 87 dc 01 00 00    	mov    eax,DWORD PTR [edi+0x1dc]
1002a26f:	5f                   	pop    edi
1002a270:	5e                   	pop    esi
1002a271:	5b                   	pop    ebx
1002a272:	8b 84 82 40 25 00 00 	mov    eax,DWORD PTR [edx+eax*4+0x2540]
1002a279:	89 81 54 02 00 00    	mov    DWORD PTR [ecx+0x254],eax
1002a27f:	8b e5                	mov    esp,ebp
1002a281:	5d                   	pop    ebp
1002a282:	c2 10 00             	ret    0x10
1002a285:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1002a288:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
1002a28d:	8b 00                	mov    eax,DWORD PTR [eax]
1002a28f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002a292:	8b 00                	mov    eax,DWORD PTR [eax]
1002a294:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a29a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002a2a0:	8a 10                	mov    dl,BYTE PTR [eax]
1002a2a2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002a2a4:	75 1a                	jne    0x1002a2c0
1002a2a6:	84 d2                	test   dl,dl
1002a2a8:	74 12                	je     0x1002a2bc
1002a2aa:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002a2ad:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002a2b0:	75 0e                	jne    0x1002a2c0
1002a2b2:	83 c0 02             	add    eax,0x2
1002a2b5:	83 c1 02             	add    ecx,0x2
1002a2b8:	84 d2                	test   dl,dl
1002a2ba:	75 e4                	jne    0x1002a2a0
1002a2bc:	33 c0                	xor    eax,eax
1002a2be:	eb 05                	jmp    0x1002a2c5
1002a2c0:	1b c0                	sbb    eax,eax
1002a2c2:	83 c8 01             	or     eax,0x1
1002a2c5:	85 c0                	test   eax,eax
1002a2c7:	0f 84 1c 01 00 00    	je     0x1002a3e9
1002a2cd:	69 45 10 1c 04 00 00 	imul   eax,DWORD PTR [ebp+0x10],0x41c
1002a2d4:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1002a2d7:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1002a2da:	03 c8                	add    ecx,eax
1002a2dc:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a2df:	8b 00                	mov    eax,DWORD PTR [eax]
1002a2e1:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a2e7:	89 81 58 02 00 00    	mov    DWORD PTR [ecx+0x258],eax
1002a2ed:	8b 87 e4 01 00 00    	mov    eax,DWORD PTR [edi+0x1e4]
1002a2f3:	89 81 5c 02 00 00    	mov    DWORD PTR [ecx+0x25c],eax
1002a2f9:	8b 87 dc 01 00 00    	mov    eax,DWORD PTR [edi+0x1dc]
1002a2ff:	5f                   	pop    edi
1002a300:	5e                   	pop    esi
1002a301:	5b                   	pop    ebx
1002a302:	8b 84 82 40 25 00 00 	mov    eax,DWORD PTR [edx+eax*4+0x2540]
1002a309:	89 81 60 02 00 00    	mov    DWORD PTR [ecx+0x260],eax
1002a30f:	8b e5                	mov    esp,ebp
1002a311:	5d                   	pop    ebp
1002a312:	c2 10 00             	ret    0x10
1002a315:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1002a318:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
1002a31d:	8b 00                	mov    eax,DWORD PTR [eax]
1002a31f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002a322:	8b 00                	mov    eax,DWORD PTR [eax]
1002a324:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a32a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002a330:	8a 10                	mov    dl,BYTE PTR [eax]
1002a332:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002a334:	75 1a                	jne    0x1002a350
1002a336:	84 d2                	test   dl,dl
1002a338:	74 12                	je     0x1002a34c
1002a33a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002a33d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002a340:	75 0e                	jne    0x1002a350
1002a342:	83 c0 02             	add    eax,0x2
1002a345:	83 c1 02             	add    ecx,0x2
1002a348:	84 d2                	test   dl,dl
1002a34a:	75 e4                	jne    0x1002a330
1002a34c:	33 c0                	xor    eax,eax
1002a34e:	eb 05                	jmp    0x1002a355
1002a350:	1b c0                	sbb    eax,eax
1002a352:	83 c8 01             	or     eax,0x1
1002a355:	85 c0                	test   eax,eax
1002a357:	0f 84 8c 00 00 00    	je     0x1002a3e9
1002a35d:	69 45 10 1c 04 00 00 	imul   eax,DWORD PTR [ebp+0x10],0x41c
1002a364:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1002a367:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1002a36a:	03 c8                	add    ecx,eax
1002a36c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a36f:	8b 00                	mov    eax,DWORD PTR [eax]
1002a371:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a377:	89 81 64 02 00 00    	mov    DWORD PTR [ecx+0x264],eax
1002a37d:	8b 87 e4 01 00 00    	mov    eax,DWORD PTR [edi+0x1e4]
1002a383:	89 81 68 02 00 00    	mov    DWORD PTR [ecx+0x268],eax
1002a389:	8b 87 dc 01 00 00    	mov    eax,DWORD PTR [edi+0x1dc]
1002a38f:	5f                   	pop    edi
1002a390:	5e                   	pop    esi
1002a391:	5b                   	pop    ebx
1002a392:	8b 84 82 40 25 00 00 	mov    eax,DWORD PTR [edx+eax*4+0x2540]
1002a399:	89 81 6c 02 00 00    	mov    DWORD PTR [ecx+0x26c],eax
1002a39f:	8b e5                	mov    esp,ebp
1002a3a1:	5d                   	pop    ebp
1002a3a2:	c2 10 00             	ret    0x10
1002a3a5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1002a3a8:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
1002a3ad:	8b 00                	mov    eax,DWORD PTR [eax]
1002a3af:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1002a3b2:	8b 00                	mov    eax,DWORD PTR [eax]
1002a3b4:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a3ba:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1002a3c0:	8a 10                	mov    dl,BYTE PTR [eax]
1002a3c2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002a3c4:	75 1a                	jne    0x1002a3e0
1002a3c6:	84 d2                	test   dl,dl
1002a3c8:	74 12                	je     0x1002a3dc
1002a3ca:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002a3cd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1002a3d0:	75 0e                	jne    0x1002a3e0
1002a3d2:	83 c0 02             	add    eax,0x2
1002a3d5:	83 c1 02             	add    ecx,0x2
1002a3d8:	84 d2                	test   dl,dl
1002a3da:	75 e4                	jne    0x1002a3c0
1002a3dc:	33 c0                	xor    eax,eax
1002a3de:	eb 05                	jmp    0x1002a3e5
1002a3e0:	1b c0                	sbb    eax,eax
1002a3e2:	83 c8 01             	or     eax,0x1
1002a3e5:	85 c0                	test   eax,eax
1002a3e7:	75 30                	jne    0x1002a419
1002a3e9:	8b bf 64 01 00 00    	mov    edi,DWORD PTR [edi+0x164]
1002a3ef:	85 ff                	test   edi,edi
1002a3f1:	0f 85 89 fc ff ff    	jne    0x1002a080
1002a3f7:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1002a3fa:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
1002a3fd:	40                   	inc    eax
1002a3fe:	83 c7 04             	add    edi,0x4
1002a401:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
1002a404:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
1002a407:	83 f8 06             	cmp    eax,0x6
1002a40a:	0f 8c 20 fc ff ff    	jl     0x1002a030
1002a410:	5f                   	pop    edi
1002a411:	5e                   	pop    esi
1002a412:	5b                   	pop    ebx
1002a413:	8b e5                	mov    esp,ebp
1002a415:	5d                   	pop    ebp
1002a416:	c2 10 00             	ret    0x10
1002a419:	69 45 10 1c 04 00 00 	imul   eax,DWORD PTR [ebp+0x10],0x41c
1002a420:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1002a423:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
1002a426:	03 c8                	add    ecx,eax
1002a428:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002a42b:	8b 00                	mov    eax,DWORD PTR [eax]
1002a42d:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
1002a433:	89 81 70 02 00 00    	mov    DWORD PTR [ecx+0x270],eax
1002a439:	8b 87 e4 01 00 00    	mov    eax,DWORD PTR [edi+0x1e4]
1002a43f:	89 81 74 02 00 00    	mov    DWORD PTR [ecx+0x274],eax
1002a445:	8b 87 dc 01 00 00    	mov    eax,DWORD PTR [edi+0x1dc]
1002a44b:	5f                   	pop    edi
1002a44c:	5e                   	pop    esi
1002a44d:	5b                   	pop    ebx
1002a44e:	8b 84 82 40 25 00 00 	mov    eax,DWORD PTR [edx+eax*4+0x2540]
1002a455:	89 81 78 02 00 00    	mov    DWORD PTR [ecx+0x278],eax
1002a45b:	8b e5                	mov    esp,ebp
1002a45d:	5d                   	pop    ebp
1002a45e:	c2 10 00             	ret    0x10
