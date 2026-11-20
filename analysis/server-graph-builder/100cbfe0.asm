
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cbfe0 <.text+0xcafe0>:
100cbfe0:	55                   	push   ebp
100cbfe1:	8b ec                	mov    ebp,esp
100cbfe3:	83 ec 40             	sub    esp,0x40
100cbfe6:	53                   	push   ebx
100cbfe7:	8b d9                	mov    ebx,ecx
100cbfe9:	ba 02 00 00 00       	mov    edx,0x2
100cbfee:	33 c9                	xor    ecx,ecx
100cbff0:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
100cbff3:	56                   	push   esi
100cbff4:	57                   	push   edi
100cbff5:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cbff8:	0f af c0             	imul   eax,eax
100cbffb:	f7 e2                	mul    edx
100cbffd:	0f 90 c1             	seto   cl
100cc000:	f7 d9                	neg    ecx
100cc002:	0b c8                	or     ecx,eax
100cc004:	51                   	push   ecx
100cc005:	e8 9e 25 07 00       	call   0x1013e5a8
100cc00a:	8b f8                	mov    edi,eax
100cc00c:	33 c9                	xor    ecx,ecx
100cc00e:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc011:	ba 04 00 00 00       	mov    edx,0x4
100cc016:	f7 e2                	mul    edx
100cc018:	89 7d f4             	mov    DWORD PTR [ebp-0xc],edi
100cc01b:	0f 90 c1             	seto   cl
100cc01e:	f7 d9                	neg    ecx
100cc020:	0b c8                	or     ecx,eax
100cc022:	51                   	push   ecx
100cc023:	e8 80 25 07 00       	call   0x1013e5a8
100cc028:	8b f0                	mov    esi,eax
100cc02a:	33 c9                	xor    ecx,ecx
100cc02c:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc02f:	ba 02 00 00 00       	mov    edx,0x2
100cc034:	f7 e2                	mul    edx
100cc036:	89 75 dc             	mov    DWORD PTR [ebp-0x24],esi
100cc039:	0f 90 c1             	seto   cl
100cc03c:	f7 d9                	neg    ecx
100cc03e:	0b c8                	or     ecx,eax
100cc040:	51                   	push   ecx
100cc041:	e8 62 25 07 00       	call   0x1013e5a8
100cc046:	8b 4b 18             	mov    ecx,DWORD PTR [ebx+0x18]
100cc049:	03 c9                	add    ecx,ecx
100cc04b:	89 45 d8             	mov    DWORD PTR [ebp-0x28],eax
100cc04e:	51                   	push   ecx
100cc04f:	e8 54 25 07 00       	call   0x1013e5a8
100cc054:	83 c4 10             	add    esp,0x10
100cc057:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
100cc05a:	85 ff                	test   edi,edi
100cc05c:	0f 84 0b 05 00 00    	je     0x100cc56d
100cc062:	85 f6                	test   esi,esi
100cc064:	0f 84 f8 04 00 00    	je     0x100cc562
100cc06a:	83 7d d8 00          	cmp    DWORD PTR [ebp-0x28],0x0
100cc06e:	0f 84 ee 04 00 00    	je     0x100cc562
100cc074:	85 c0                	test   eax,eax
100cc076:	0f 84 e6 04 00 00    	je     0x100cc562
100cc07c:	33 c0                	xor    eax,eax
100cc07e:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
100cc081:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
100cc084:	33 c0                	xor    eax,eax
100cc086:	89 45 c8             	mov    DWORD PTR [ebp-0x38],eax
100cc089:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100cc090:	83 e8 00             	sub    eax,0x0
100cc093:	74 0e                	je     0x100cc0a3
100cc095:	83 e8 01             	sub    eax,0x1
100cc098:	75 10                	jne    0x100cc0aa
100cc09a:	c7 45 c4 40 03 00 00 	mov    DWORD PTR [ebp-0x3c],0x340
100cc0a1:	eb 07                	jmp    0x100cc0aa
100cc0a3:	c7 45 c4 00 00 00 00 	mov    DWORD PTR [ebp-0x3c],0x0
100cc0aa:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc0ad:	33 d2                	xor    edx,edx
100cc0af:	85 c0                	test   eax,eax
100cc0b1:	7e 28                	jle    0x100cc0db
100cc0b3:	8b f0                	mov    esi,eax
100cc0b5:	33 c9                	xor    ecx,ecx
100cc0b7:	8b c6                	mov    eax,esi
100cc0b9:	85 f6                	test   esi,esi
100cc0bb:	7e 17                	jle    0x100cc0d4
100cc0bd:	83 ce ff             	or     esi,0xffffffff
100cc0c0:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc0c3:	0f af c2             	imul   eax,edx
100cc0c6:	03 c1                	add    eax,ecx
100cc0c8:	41                   	inc    ecx
100cc0c9:	66 89 34 47          	mov    WORD PTR [edi+eax*2],si
100cc0cd:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc0d0:	3b c8                	cmp    ecx,eax
100cc0d2:	7c ec                	jl     0x100cc0c0
100cc0d4:	42                   	inc    edx
100cc0d5:	8b f0                	mov    esi,eax
100cc0d7:	3b d0                	cmp    edx,eax
100cc0d9:	7c da                	jl     0x100cc0b5
100cc0db:	33 c9                	xor    ecx,ecx
100cc0dd:	89 4d e8             	mov    DWORD PTR [ebp-0x18],ecx
100cc0e0:	85 c0                	test   eax,eax
100cc0e2:	0f 8e ca 00 00 00    	jle    0x100cc1b2
100cc0e8:	8d 70 ff             	lea    esi,[eax-0x1]
100cc0eb:	89 75 d4             	mov    DWORD PTR [ebp-0x2c],esi
100cc0ee:	85 f6                	test   esi,esi
100cc0f0:	0f 88 b0 00 00 00    	js     0x100cc1a6
100cc0f6:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc0f9:	0f af c1             	imul   eax,ecx
100cc0fc:	03 c6                	add    eax,esi
100cc0fe:	66 83 3c 47 ff       	cmp    WORD PTR [edi+eax*2],0xffff
100cc103:	0f 85 8e 00 00 00    	jne    0x100cc197
100cc109:	ff 75 c4             	push   DWORD PTR [ebp-0x3c]
100cc10c:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
100cc10f:	56                   	push   esi
100cc110:	51                   	push   ecx
100cc111:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
100cc114:	8b cb                	mov    ecx,ebx
100cc116:	e8 c5 14 00 00       	call   0x100cd5e0
100cc11b:	8b f8                	mov    edi,eax
100cc11d:	83 ff 01             	cmp    edi,0x1
100cc120:	0f 8e 2b 01 00 00    	jle    0x100cc251
100cc126:	8d 5f ff             	lea    ebx,[edi-0x1]
100cc129:	89 5d d0             	mov    DWORD PTR [ebp-0x30],ebx
100cc12c:	85 db                	test   ebx,ebx
100cc12e:	7e 5e                	jle    0x100cc18e
100cc130:	8b 75 dc             	mov    esi,DWORD PTR [ebp-0x24]
100cc133:	ba 01 00 00 00       	mov    edx,0x1
100cc138:	89 55 cc             	mov    DWORD PTR [ebp-0x34],edx
100cc13b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100cc140:	8b 06                	mov    eax,DWORD PTR [esi]
100cc142:	83 c6 04             	add    esi,0x4
100cc145:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cc148:	89 75 c0             	mov    DWORD PTR [ebp-0x40],esi
100cc14b:	8b 06                	mov    eax,DWORD PTR [esi]
100cc14d:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100cc150:	8b c2                	mov    eax,edx
100cc152:	3b d7                	cmp    edx,edi
100cc154:	7d 29                	jge    0x100cc17f
100cc156:	8b 75 f8             	mov    esi,DWORD PTR [ebp-0x8]
100cc159:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
100cc15c:	8b 55 dc             	mov    edx,DWORD PTR [ebp-0x24]
100cc15f:	90                   	nop
100cc160:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100cc163:	8b 49 18             	mov    ecx,DWORD PTR [ecx+0x18]
100cc166:	0f af 4d fc          	imul   ecx,DWORD PTR [ebp-0x4]
100cc16a:	03 0c 82             	add    ecx,DWORD PTR [edx+eax*4]
100cc16d:	40                   	inc    eax
100cc16e:	66 89 34 4b          	mov    WORD PTR [ebx+ecx*2],si
100cc172:	3b c7                	cmp    eax,edi
100cc174:	7c ea                	jl     0x100cc160
100cc176:	8b 55 cc             	mov    edx,DWORD PTR [ebp-0x34]
100cc179:	8b 75 c0             	mov    esi,DWORD PTR [ebp-0x40]
100cc17c:	8b 5d d0             	mov    ebx,DWORD PTR [ebp-0x30]
100cc17f:	42                   	inc    edx
100cc180:	83 eb 01             	sub    ebx,0x1
100cc183:	89 55 cc             	mov    DWORD PTR [ebp-0x34],edx
100cc186:	89 5d d0             	mov    DWORD PTR [ebp-0x30],ebx
100cc189:	75 b5                	jne    0x100cc140
100cc18b:	8b 75 d4             	mov    esi,DWORD PTR [ebp-0x2c]
100cc18e:	8b 7d f4             	mov    edi,DWORD PTR [ebp-0xc]
100cc191:	8b 4d e8             	mov    ecx,DWORD PTR [ebp-0x18]
100cc194:	8b 5d f0             	mov    ebx,DWORD PTR [ebp-0x10]
100cc197:	83 ee 01             	sub    esi,0x1
100cc19a:	89 75 d4             	mov    DWORD PTR [ebp-0x2c],esi
100cc19d:	0f 89 53 ff ff ff    	jns    0x100cc0f6
100cc1a3:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc1a6:	41                   	inc    ecx
100cc1a7:	89 4d e8             	mov    DWORD PTR [ebp-0x18],ecx
100cc1aa:	3b c8                	cmp    ecx,eax
100cc1ac:	0f 8c 36 ff ff ff    	jl     0x100cc0e8
100cc1b2:	33 d2                	xor    edx,edx
100cc1b4:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
100cc1b7:	85 c0                	test   eax,eax
100cc1b9:	0f 8e 69 03 00 00    	jle    0x100cc528
100cc1bf:	8b 4d e0             	mov    ecx,DWORD PTR [ebp-0x20]
100cc1c2:	8b 75 c8             	mov    esi,DWORD PTR [ebp-0x38]
100cc1c5:	83 c1 05             	add    ecx,0x5
100cc1c8:	8d 0c 4e             	lea    ecx,[esi+ecx*2]
100cc1cb:	c1 e1 02             	shl    ecx,0x2
100cc1ce:	89 4d e8             	mov    DWORD PTR [ebp-0x18],ecx
100cc1d1:	33 c9                	xor    ecx,ecx
100cc1d3:	85 c0                	test   eax,eax
100cc1d5:	7e 21                	jle    0x100cc1f8
100cc1d7:	8b 75 d8             	mov    esi,DWORD PTR [ebp-0x28]
100cc1da:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100cc1e0:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc1e3:	0f af c2             	imul   eax,edx
100cc1e6:	03 c1                	add    eax,ecx
100cc1e8:	66 8b 04 47          	mov    ax,WORD PTR [edi+eax*2]
100cc1ec:	66 89 04 4e          	mov    WORD PTR [esi+ecx*2],ax
100cc1f0:	41                   	inc    ecx
100cc1f1:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc1f4:	3b c8                	cmp    ecx,eax
100cc1f6:	7c e8                	jl     0x100cc1e0
100cc1f8:	8b 7d ec             	mov    edi,DWORD PTR [ebp-0x14]
100cc1fb:	33 c9                	xor    ecx,ecx
100cc1fd:	33 d2                	xor    edx,edx
100cc1ff:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100cc202:	be 7f 96 98 00       	mov    esi,0x98967f
100cc207:	89 55 cc             	mov    DWORD PTR [ebp-0x34],edx
100cc20a:	33 db                	xor    ebx,ebx
100cc20c:	89 75 d0             	mov    DWORD PTR [ebp-0x30],esi
100cc20f:	85 c0                	test   eax,eax
100cc211:	0f 8e c0 01 00 00    	jle    0x100cc3d7
100cc217:	8b 45 d8             	mov    eax,DWORD PTR [ebp-0x28]
100cc21a:	8d 14 50             	lea    edx,[eax+edx*2]
100cc21d:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
100cc220:	89 55 c0             	mov    DWORD PTR [ebp-0x40],edx
100cc223:	0f b7 12             	movzx  edx,WORD PTR [edx]
100cc226:	3b d6                	cmp    edx,esi
100cc228:	75 0c                	jne    0x100cc236
100cc22a:	c7 45 d4 01 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x1
100cc231:	83 f9 7f             	cmp    ecx,0x7f
100cc234:	7c 07                	jl     0x100cc23d
100cc236:	c7 45 d4 00 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x0
100cc23d:	3b 55 cc             	cmp    edx,DWORD PTR [ebp-0x34]
100cc240:	75 32                	jne    0x100cc274
100cc242:	81 fb 80 00 00 00    	cmp    ebx,0x80
100cc248:	7d 2a                	jge    0x100cc274
100cc24a:	be 01 00 00 00       	mov    esi,0x1
100cc24f:	eb 25                	jmp    0x100cc276
100cc251:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc254:	8b 4d e8             	mov    ecx,DWORD PTR [ebp-0x18]
100cc257:	8b 7d f4             	mov    edi,DWORD PTR [ebp-0xc]
100cc25a:	0f af c1             	imul   eax,ecx
100cc25d:	03 c6                	add    eax,esi
100cc25f:	66 89 0c 47          	mov    WORD PTR [edi+eax*2],cx
100cc263:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc266:	0f af c6             	imul   eax,esi
100cc269:	03 c1                	add    eax,ecx
100cc26b:	66 89 34 47          	mov    WORD PTR [edi+eax*2],si
100cc26f:	e9 23 ff ff ff       	jmp    0x100cc197
100cc274:	33 f6                	xor    esi,esi
100cc276:	85 c9                	test   ecx,ecx
100cc278:	0f 84 8a 00 00 00    	je     0x100cc308
100cc27e:	83 7d d4 00          	cmp    DWORD PTR [ebp-0x2c],0x0
100cc282:	74 06                	je     0x100cc28a
100cc284:	41                   	inc    ecx
100cc285:	e9 aa 00 00 00       	jmp    0x100cc334
100cc28a:	8b 55 d0             	mov    edx,DWORD PTR [ebp-0x30]
100cc28d:	fe c9                	dec    cl
100cc28f:	83 45 fc 02          	add    DWORD PTR [ebp-0x4],0x2
100cc293:	88 0f                	mov    BYTE PTR [edi],cl
100cc295:	8b ca                	mov    ecx,edx
100cc297:	2b 4d f8             	sub    ecx,DWORD PTR [ebp-0x8]
100cc29a:	47                   	inc    edi
100cc29b:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
100cc29e:	89 4d d4             	mov    DWORD PTR [ebp-0x2c],ecx
100cc2a1:	8b c8                	mov    ecx,eax
100cc2a3:	2b 4d f8             	sub    ecx,DWORD PTR [ebp-0x8]
100cc2a6:	03 ca                	add    ecx,edx
100cc2a8:	2b d0                	sub    edx,eax
100cc2aa:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
100cc2ad:	2b 55 f8             	sub    edx,DWORD PTR [ebp-0x8]
100cc2b0:	83 e8 80             	sub    eax,0xffffff80
100cc2b3:	3d ff 00 00 00       	cmp    eax,0xff
100cc2b8:	77 08                	ja     0x100cc2c2
100cc2ba:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
100cc2bd:	88 07                	mov    BYTE PTR [edi],al
100cc2bf:	47                   	inc    edi
100cc2c0:	eb 3a                	jmp    0x100cc2fc
100cc2c2:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100cc2c8:	3d ff 00 00 00       	cmp    eax,0xff
100cc2cd:	77 05                	ja     0x100cc2d4
100cc2cf:	88 0f                	mov    BYTE PTR [edi],cl
100cc2d1:	47                   	inc    edi
100cc2d2:	eb 28                	jmp    0x100cc2fc
100cc2d4:	8d 82 80 00 00 00    	lea    eax,[edx+0x80]
100cc2da:	3d ff 00 00 00       	cmp    eax,0xff
100cc2df:	77 05                	ja     0x100cc2e6
100cc2e1:	88 17                	mov    BYTE PTR [edi],dl
100cc2e3:	47                   	inc    edi
100cc2e4:	eb 16                	jmp    0x100cc2fc
100cc2e6:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100cc2e9:	ff 75 d0             	push   DWORD PTR [ebp-0x30]
100cc2ec:	68 34 74 1d 10       	push   0x101d7434
100cc2f1:	6a 02                	push   0x2
100cc2f3:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cc2f9:	83 c4 10             	add    esp,0x10
100cc2fc:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
100cc2ff:	33 c9                	xor    ecx,ecx
100cc301:	85 f6                	test   esi,esi
100cc303:	74 2a                	je     0x100cc32f
100cc305:	43                   	inc    ebx
100cc306:	eb 2c                	jmp    0x100cc334
100cc308:	85 db                	test   ebx,ebx
100cc30a:	74 7c                	je     0x100cc388
100cc30c:	85 f6                	test   esi,esi
100cc30e:	74 03                	je     0x100cc313
100cc310:	43                   	inc    ebx
100cc311:	eb 21                	jmp    0x100cc334
100cc313:	83 fb 01             	cmp    ebx,0x1
100cc316:	75 0d                	jne    0x100cc325
100cc318:	83 7d d4 00          	cmp    DWORD PTR [ebp-0x2c],0x0
100cc31c:	74 07                	je     0x100cc325
100cc31e:	8d 4b 01             	lea    ecx,[ebx+0x1]
100cc321:	33 db                	xor    ebx,ebx
100cc323:	eb 0f                	jmp    0x100cc334
100cc325:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
100cc328:	f6 db                	neg    bl
100cc32a:	88 1f                	mov    BYTE PTR [edi],bl
100cc32c:	47                   	inc    edi
100cc32d:	33 db                	xor    ebx,ebx
100cc32f:	b9 01 00 00 00       	mov    ecx,0x1
100cc334:	8b 55 c0             	mov    edx,DWORD PTR [ebp-0x40]
100cc337:	0f b7 32             	movzx  esi,WORD PTR [edx]
100cc33a:	8b 55 cc             	mov    edx,DWORD PTR [ebp-0x34]
100cc33d:	42                   	inc    edx
100cc33e:	89 75 d0             	mov    DWORD PTR [ebp-0x30],esi
100cc341:	89 55 cc             	mov    DWORD PTR [ebp-0x34],edx
100cc344:	3b 50 18             	cmp    edx,DWORD PTR [eax+0x18]
100cc347:	0f 8c ca fe ff ff    	jl     0x100cc217
100cc34d:	85 c9                	test   ecx,ecx
100cc34f:	74 7a                	je     0x100cc3cb
100cc351:	83 45 fc 02          	add    DWORD PTR [ebp-0x4],0x2
100cc355:	fe c9                	dec    cl
100cc357:	88 0f                	mov    BYTE PTR [edi],cl
100cc359:	8b d6                	mov    edx,esi
100cc35b:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
100cc35e:	8b ce                	mov    ecx,esi
100cc360:	2b 4d f8             	sub    ecx,DWORD PTR [ebp-0x8]
100cc363:	2b d0                	sub    edx,eax
100cc365:	2b 55 f8             	sub    edx,DWORD PTR [ebp-0x8]
100cc368:	47                   	inc    edi
100cc369:	89 4d cc             	mov    DWORD PTR [ebp-0x34],ecx
100cc36c:	8b c8                	mov    ecx,eax
100cc36e:	2b 4d f8             	sub    ecx,DWORD PTR [ebp-0x8]
100cc371:	8b 45 cc             	mov    eax,DWORD PTR [ebp-0x34]
100cc374:	03 ce                	add    ecx,esi
100cc376:	83 e8 80             	sub    eax,0xffffff80
100cc379:	3d ff 00 00 00       	cmp    eax,0xff
100cc37e:	77 13                	ja     0x100cc393
100cc380:	8b 45 cc             	mov    eax,DWORD PTR [ebp-0x34]
100cc383:	88 07                	mov    BYTE PTR [edi],al
100cc385:	47                   	inc    edi
100cc386:	eb 43                	jmp    0x100cc3cb
100cc388:	85 f6                	test   esi,esi
100cc38a:	74 a3                	je     0x100cc32f
100cc38c:	bb 01 00 00 00       	mov    ebx,0x1
100cc391:	eb a1                	jmp    0x100cc334
100cc393:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100cc399:	3d ff 00 00 00       	cmp    eax,0xff
100cc39e:	77 05                	ja     0x100cc3a5
100cc3a0:	88 0f                	mov    BYTE PTR [edi],cl
100cc3a2:	47                   	inc    edi
100cc3a3:	eb 26                	jmp    0x100cc3cb
100cc3a5:	8d 82 80 00 00 00    	lea    eax,[edx+0x80]
100cc3ab:	3d ff 00 00 00       	cmp    eax,0xff
100cc3b0:	77 05                	ja     0x100cc3b7
100cc3b2:	88 17                	mov    BYTE PTR [edi],dl
100cc3b4:	47                   	inc    edi
100cc3b5:	eb 14                	jmp    0x100cc3cb
100cc3b7:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100cc3ba:	56                   	push   esi
100cc3bb:	68 34 74 1d 10       	push   0x101d7434
100cc3c0:	6a 02                	push   0x2
100cc3c2:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cc3c8:	83 c4 10             	add    esp,0x10
100cc3cb:	85 db                	test   ebx,ebx
100cc3cd:	74 08                	je     0x100cc3d7
100cc3cf:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
100cc3d2:	f6 db                	neg    bl
100cc3d4:	88 1f                	mov    BYTE PTR [edi],bl
100cc3d6:	47                   	inc    edi
100cc3d7:	8b 5d f0             	mov    ebx,DWORD PTR [ebp-0x10]
100cc3da:	2b 7d ec             	sub    edi,DWORD PTR [ebp-0x14]
100cc3dd:	8b 73 14             	mov    esi,DWORD PTR [ebx+0x14]
100cc3e0:	85 f6                	test   esi,esi
100cc3e2:	0f 84 f6 00 00 00    	je     0x100cc4de
100cc3e8:	8b 53 20             	mov    edx,DWORD PTR [ebx+0x20]
100cc3eb:	33 c9                	xor    ecx,ecx
100cc3ed:	8b c2                	mov    eax,edx
100cc3ef:	89 4d cc             	mov    DWORD PTR [ebp-0x34],ecx
100cc3f2:	2b c7                	sub    eax,edi
100cc3f4:	89 45 c0             	mov    DWORD PTR [ebp-0x40],eax
100cc3f7:	85 c0                	test   eax,eax
100cc3f9:	7e 7d                	jle    0x100cc478
100cc3fb:	89 55 d0             	mov    DWORD PTR [ebp-0x30],edx
100cc3fe:	66 90                	xchg   ax,ax
100cc400:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
100cc403:	03 ce                	add    ecx,esi
100cc405:	8b f7                	mov    esi,edi
100cc407:	83 ee 04             	sub    esi,0x4
100cc40a:	72 15                	jb     0x100cc421
100cc40c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100cc410:	8b 01                	mov    eax,DWORD PTR [ecx]
100cc412:	3b 02                	cmp    eax,DWORD PTR [edx]
100cc414:	75 10                	jne    0x100cc426
100cc416:	83 c1 04             	add    ecx,0x4
100cc419:	83 c2 04             	add    edx,0x4
100cc41c:	83 ee 04             	sub    esi,0x4
100cc41f:	73 ef                	jae    0x100cc410
100cc421:	83 fe fc             	cmp    esi,0xfffffffc
100cc424:	74 34                	je     0x100cc45a
100cc426:	8a 01                	mov    al,BYTE PTR [ecx]
100cc428:	3a 02                	cmp    al,BYTE PTR [edx]
100cc42a:	75 27                	jne    0x100cc453
100cc42c:	83 fe fd             	cmp    esi,0xfffffffd
100cc42f:	74 29                	je     0x100cc45a
100cc431:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100cc434:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100cc437:	75 1a                	jne    0x100cc453
100cc439:	83 fe fe             	cmp    esi,0xfffffffe
100cc43c:	74 1c                	je     0x100cc45a
100cc43e:	8a 41 02             	mov    al,BYTE PTR [ecx+0x2]
100cc441:	3a 42 02             	cmp    al,BYTE PTR [edx+0x2]
100cc444:	75 0d                	jne    0x100cc453
100cc446:	83 fe ff             	cmp    esi,0xffffffff
100cc449:	74 0f                	je     0x100cc45a
100cc44b:	8a 41 03             	mov    al,BYTE PTR [ecx+0x3]
100cc44e:	3a 42 03             	cmp    al,BYTE PTR [edx+0x3]
100cc451:	74 07                	je     0x100cc45a
100cc453:	1b c0                	sbb    eax,eax
100cc455:	83 c8 01             	or     eax,0x1
100cc458:	eb 02                	jmp    0x100cc45c
100cc45a:	33 c0                	xor    eax,eax
100cc45c:	8b 55 d0             	mov    edx,DWORD PTR [ebp-0x30]
100cc45f:	8b 4d cc             	mov    ecx,DWORD PTR [ebp-0x34]
100cc462:	85 c0                	test   eax,eax
100cc464:	74 12                	je     0x100cc478
100cc466:	8b 53 20             	mov    edx,DWORD PTR [ebx+0x20]
100cc469:	41                   	inc    ecx
100cc46a:	8b 73 14             	mov    esi,DWORD PTR [ebx+0x14]
100cc46d:	89 4d cc             	mov    DWORD PTR [ebp-0x34],ecx
100cc470:	89 55 d0             	mov    DWORD PTR [ebp-0x30],edx
100cc473:	3b 4d c0             	cmp    ecx,DWORD PTR [ebp-0x40]
100cc476:	7c 88                	jl     0x100cc400
100cc478:	8b c2                	mov    eax,edx
100cc47a:	2b c7                	sub    eax,edi
100cc47c:	3b c8                	cmp    ecx,eax
100cc47e:	7d 0e                	jge    0x100cc48e
100cc480:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
100cc483:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
100cc486:	89 0c 02             	mov    DWORD PTR [edx+eax*1],ecx
100cc489:	e9 81 00 00 00       	jmp    0x100cc50f
100cc48e:	8d 04 3a             	lea    eax,[edx+edi*1]
100cc491:	50                   	push   eax
100cc492:	6a 01                	push   0x1
100cc494:	e8 9d 50 0a 00       	call   0x10171536
100cc499:	ff 73 20             	push   DWORD PTR [ebx+0x20]
100cc49c:	8b f0                	mov    esi,eax
100cc49e:	ff 73 14             	push   DWORD PTR [ebx+0x14]
100cc4a1:	56                   	push   esi
100cc4a2:	e8 89 3c 07 00       	call   0x10140130
100cc4a7:	ff 73 14             	push   DWORD PTR [ebx+0x14]
100cc4aa:	e8 22 50 0a 00       	call   0x101714d1
100cc4af:	8b 43 20             	mov    eax,DWORD PTR [ebx+0x20]
100cc4b2:	57                   	push   edi
100cc4b3:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
100cc4b6:	03 c6                	add    eax,esi
100cc4b8:	89 73 14             	mov    DWORD PTR [ebx+0x14],esi
100cc4bb:	50                   	push   eax
100cc4bc:	e8 6f 3c 07 00       	call   0x10140130
100cc4c1:	8b 4b 0c             	mov    ecx,DWORD PTR [ebx+0xc]
100cc4c4:	83 c4 24             	add    esp,0x24
100cc4c7:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
100cc4ca:	8b 43 20             	mov    eax,DWORD PTR [ebx+0x20]
100cc4cd:	89 04 0a             	mov    DWORD PTR [edx+ecx*1],eax
100cc4d0:	8b 4d e4             	mov    ecx,DWORD PTR [ebp-0x1c]
100cc4d3:	01 7b 20             	add    DWORD PTR [ebx+0x20],edi
100cc4d6:	03 4d fc             	add    ecx,DWORD PTR [ebp-0x4]
100cc4d9:	89 4d e4             	mov    DWORD PTR [ebp-0x1c],ecx
100cc4dc:	eb 31                	jmp    0x100cc50f
100cc4de:	57                   	push   edi
100cc4df:	6a 01                	push   0x1
100cc4e1:	89 7b 20             	mov    DWORD PTR [ebx+0x20],edi
100cc4e4:	e8 4d 50 0a 00       	call   0x10171536
100cc4e9:	57                   	push   edi
100cc4ea:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
100cc4ed:	89 43 14             	mov    DWORD PTR [ebx+0x14],eax
100cc4f0:	50                   	push   eax
100cc4f1:	e8 3a 3c 07 00       	call   0x10140130
100cc4f6:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
100cc4f9:	83 c4 14             	add    esp,0x14
100cc4fc:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
100cc4ff:	c7 04 02 00 00 00 00 	mov    DWORD PTR [edx+eax*1],0x0
100cc506:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
100cc509:	03 45 fc             	add    eax,DWORD PTR [ebp-0x4]
100cc50c:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
100cc50f:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
100cc512:	83 45 e8 58          	add    DWORD PTR [ebp-0x18],0x58
100cc516:	42                   	inc    edx
100cc517:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cc51a:	8b 7d f4             	mov    edi,DWORD PTR [ebp-0xc]
100cc51d:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
100cc520:	3b d0                	cmp    edx,eax
100cc522:	0f 8c a9 fc ff ff    	jl     0x100cc1d1
100cc528:	8b 45 c8             	mov    eax,DWORD PTR [ebp-0x38]
100cc52b:	8b 7d f4             	mov    edi,DWORD PTR [ebp-0xc]
100cc52e:	40                   	inc    eax
100cc52f:	89 45 c8             	mov    DWORD PTR [ebp-0x38],eax
100cc532:	83 f8 02             	cmp    eax,0x2
100cc535:	0f 8c 55 fb ff ff    	jl     0x100cc090
100cc53b:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
100cc53e:	40                   	inc    eax
100cc53f:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
100cc542:	83 f8 04             	cmp    eax,0x4
100cc545:	0f 8c 39 fb ff ff    	jl     0x100cc084
100cc54b:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
100cc54e:	50                   	push   eax
100cc54f:	68 54 74 1d 10       	push   0x101d7454
100cc554:	6a 02                	push   0x2
100cc556:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cc55c:	8b 75 dc             	mov    esi,DWORD PTR [ebp-0x24]
100cc55f:	83 c4 0c             	add    esp,0xc
100cc562:	6a 02                	push   0x2
100cc564:	57                   	push   edi
100cc565:	e8 3b 16 07 00       	call   0x1013dba5
100cc56a:	83 c4 08             	add    esp,0x8
100cc56d:	8b 45 d8             	mov    eax,DWORD PTR [ebp-0x28]
100cc570:	85 c0                	test   eax,eax
100cc572:	74 0b                	je     0x100cc57f
100cc574:	6a 02                	push   0x2
100cc576:	50                   	push   eax
100cc577:	e8 29 16 07 00       	call   0x1013dba5
100cc57c:	83 c4 08             	add    esp,0x8
100cc57f:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
100cc582:	85 c0                	test   eax,eax
100cc584:	74 0b                	je     0x100cc591
100cc586:	6a 01                	push   0x1
100cc588:	50                   	push   eax
100cc589:	e8 17 16 07 00       	call   0x1013dba5
100cc58e:	83 c4 08             	add    esp,0x8
100cc591:	85 f6                	test   esi,esi
100cc593:	74 0b                	je     0x100cc5a0
100cc595:	6a 04                	push   0x4
100cc597:	56                   	push   esi
100cc598:	e8 08 16 07 00       	call   0x1013dba5
100cc59d:	83 c4 08             	add    esp,0x8
100cc5a0:	5f                   	pop    edi
100cc5a1:	5e                   	pop    esi
100cc5a2:	c7 43 08 01 00 00 00 	mov    DWORD PTR [ebx+0x8],0x1
100cc5a9:	5b                   	pop    ebx
100cc5aa:	8b e5                	mov    esp,ebp
100cc5ac:	5d                   	pop    ebp
100cc5ad:	c3                   	ret
