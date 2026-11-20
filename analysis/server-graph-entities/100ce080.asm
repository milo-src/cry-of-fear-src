
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ce080 <.text+0xcd080>:
100ce080:	55                   	push   ebp
100ce081:	8b ec                	mov    ebp,esp
100ce083:	53                   	push   ebx
100ce084:	56                   	push   esi
100ce085:	57                   	push   edi
100ce086:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100ce089:	8b d9                	mov    ebx,ecx
100ce08b:	ba e8 6d 1d 10       	mov    edx,0x101d6de8
100ce090:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100ce093:	8b c6                	mov    eax,esi
100ce095:	8a 08                	mov    cl,BYTE PTR [eax]
100ce097:	3a 0a                	cmp    cl,BYTE PTR [edx]
100ce099:	75 1a                	jne    0x100ce0b5
100ce09b:	84 c9                	test   cl,cl
100ce09d:	74 12                	je     0x100ce0b1
100ce09f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100ce0a2:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100ce0a5:	75 0e                	jne    0x100ce0b5
100ce0a7:	83 c0 02             	add    eax,0x2
100ce0aa:	83 c2 02             	add    edx,0x2
100ce0ad:	84 c9                	test   cl,cl
100ce0af:	75 e4                	jne    0x100ce095
100ce0b1:	33 c0                	xor    eax,eax
100ce0b3:	eb 05                	jmp    0x100ce0ba
100ce0b5:	1b c0                	sbb    eax,eax
100ce0b7:	83 c8 01             	or     eax,0x1
100ce0ba:	85 c0                	test   eax,eax
100ce0bc:	75 1c                	jne    0x100ce0da
100ce0be:	ff 77 08             	push   DWORD PTR [edi+0x8]
100ce0c1:	e8 98 d4 09 00       	call   0x1016b55e
100ce0c6:	66 89 83 dc 00 00 00 	mov    WORD PTR [ebx+0xdc],ax
100ce0cd:	83 c4 04             	add    esp,0x4
100ce0d0:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100ce0d3:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100ce0da:	b9 f4 6d 1d 10       	mov    ecx,0x101d6df4
100ce0df:	8b c6                	mov    eax,esi
100ce0e1:	8a 10                	mov    dl,BYTE PTR [eax]
100ce0e3:	3a 11                	cmp    dl,BYTE PTR [ecx]
100ce0e5:	75 1a                	jne    0x100ce101
100ce0e7:	84 d2                	test   dl,dl
100ce0e9:	74 12                	je     0x100ce0fd
100ce0eb:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100ce0ee:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100ce0f1:	75 0e                	jne    0x100ce101
100ce0f3:	83 c0 02             	add    eax,0x2
100ce0f6:	83 c1 02             	add    ecx,0x2
100ce0f9:	84 d2                	test   dl,dl
100ce0fb:	75 e4                	jne    0x100ce0e1
100ce0fd:	33 c0                	xor    eax,eax
100ce0ff:	eb 05                	jmp    0x100ce106
100ce101:	1b c0                	sbb    eax,eax
100ce103:	83 c8 01             	or     eax,0x1
100ce106:	85 c0                	test   eax,eax
100ce108:	75 20                	jne    0x100ce12a
100ce10a:	ff 77 08             	push   DWORD PTR [edi+0x8]
100ce10d:	e8 4c d4 09 00       	call   0x1016b55e
100ce112:	83 c4 04             	add    esp,0x4
100ce115:	66 89 83 de 00 00 00 	mov    WORD PTR [ebx+0xde],ax
100ce11c:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100ce123:	5f                   	pop    edi
100ce124:	5e                   	pop    esi
100ce125:	5b                   	pop    ebx
100ce126:	5d                   	pop    ebp
100ce127:	c2 04 00             	ret    0x4
100ce12a:	b9 7c 24 1a 10       	mov    ecx,0x101a247c
100ce12f:	8b c6                	mov    eax,esi
100ce131:	8a 10                	mov    dl,BYTE PTR [eax]
100ce133:	3a 11                	cmp    dl,BYTE PTR [ecx]
100ce135:	75 1a                	jne    0x100ce151
100ce137:	84 d2                	test   dl,dl
100ce139:	74 12                	je     0x100ce14d
100ce13b:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100ce13e:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100ce141:	75 0e                	jne    0x100ce151
100ce143:	83 c0 02             	add    eax,0x2
100ce146:	83 c1 02             	add    ecx,0x2
100ce149:	84 d2                	test   dl,dl
100ce14b:	75 e4                	jne    0x100ce131
100ce14d:	33 c0                	xor    eax,eax
100ce14f:	eb 05                	jmp    0x100ce156
100ce151:	1b c0                	sbb    eax,eax
100ce153:	83 c8 01             	or     eax,0x1
100ce156:	85 c0                	test   eax,eax
100ce158:	75 1d                	jne    0x100ce177
100ce15a:	ff 77 08             	push   DWORD PTR [edi+0x8]
100ce15d:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100ce163:	83 c4 04             	add    esp,0x4
100ce166:	89 43 18             	mov    DWORD PTR [ebx+0x18],eax
100ce169:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100ce170:	5f                   	pop    edi
100ce171:	5e                   	pop    esi
100ce172:	5b                   	pop    ebx
100ce173:	5d                   	pop    ebp
100ce174:	c2 04 00             	ret    0x4
100ce177:	b9 88 24 1a 10       	mov    ecx,0x101a2488
100ce17c:	8b c6                	mov    eax,esi
100ce17e:	66 90                	xchg   ax,ax
100ce180:	8a 10                	mov    dl,BYTE PTR [eax]
100ce182:	3a 11                	cmp    dl,BYTE PTR [ecx]
100ce184:	75 1a                	jne    0x100ce1a0
100ce186:	84 d2                	test   dl,dl
100ce188:	74 12                	je     0x100ce19c
100ce18a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100ce18d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100ce190:	75 0e                	jne    0x100ce1a0
100ce192:	83 c0 02             	add    eax,0x2
100ce195:	83 c1 02             	add    ecx,0x2
100ce198:	84 d2                	test   dl,dl
100ce19a:	75 e4                	jne    0x100ce180
100ce19c:	33 c0                	xor    eax,eax
100ce19e:	eb 05                	jmp    0x100ce1a5
100ce1a0:	1b c0                	sbb    eax,eax
100ce1a2:	83 c8 01             	or     eax,0x1
100ce1a5:	85 c0                	test   eax,eax
100ce1a7:	75 1c                	jne    0x100ce1c5
100ce1a9:	ff 77 08             	push   DWORD PTR [edi+0x8]
100ce1ac:	e8 ad d3 09 00       	call   0x1016b55e
100ce1b1:	83 c4 04             	add    esp,0x4
100ce1b4:	89 43 60             	mov    DWORD PTR [ebx+0x60],eax
100ce1b7:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100ce1be:	5f                   	pop    edi
100ce1bf:	5e                   	pop    esi
100ce1c0:	5b                   	pop    ebx
100ce1c1:	5d                   	pop    ebp
100ce1c2:	c2 04 00             	ret    0x4
100ce1c5:	b8 90 24 1a 10       	mov    eax,0x101a2490
100ce1ca:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100ce1d0:	8a 0e                	mov    cl,BYTE PTR [esi]
100ce1d2:	3a 08                	cmp    cl,BYTE PTR [eax]
100ce1d4:	75 1a                	jne    0x100ce1f0
100ce1d6:	84 c9                	test   cl,cl
100ce1d8:	74 12                	je     0x100ce1ec
100ce1da:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
100ce1dd:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
100ce1e0:	75 0e                	jne    0x100ce1f0
100ce1e2:	83 c6 02             	add    esi,0x2
100ce1e5:	83 c0 02             	add    eax,0x2
100ce1e8:	84 c9                	test   cl,cl
100ce1ea:	75 e4                	jne    0x100ce1d0
100ce1ec:	33 c0                	xor    eax,eax
100ce1ee:	eb 05                	jmp    0x100ce1f5
100ce1f0:	1b c0                	sbb    eax,eax
100ce1f2:	83 c8 01             	or     eax,0x1
100ce1f5:	85 c0                	test   eax,eax
100ce1f7:	75 1c                	jne    0x100ce215
100ce1f9:	ff 77 08             	push   DWORD PTR [edi+0x8]
100ce1fc:	e8 5d d3 09 00       	call   0x1016b55e
100ce201:	83 c4 04             	add    esp,0x4
100ce204:	89 43 64             	mov    DWORD PTR [ebx+0x64],eax
100ce207:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100ce20e:	5f                   	pop    edi
100ce20f:	5e                   	pop    esi
100ce210:	5b                   	pop    ebx
100ce211:	5d                   	pop    ebp
100ce212:	c2 04 00             	ret    0x4
100ce215:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
100ce21c:	5f                   	pop    edi
100ce21d:	5e                   	pop    esi
100ce21e:	5b                   	pop    ebx
100ce21f:	5d                   	pop    ebp
100ce220:	c2 04 00             	ret    0x4
