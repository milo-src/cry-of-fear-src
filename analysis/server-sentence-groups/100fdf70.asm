
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fdf70 <.text+0xfcf70>:
100fdf70:	55                   	push   ebp
100fdf71:	8b ec                	mov    ebp,esp
100fdf73:	81 ec 58 02 00 00    	sub    esp,0x258
100fdf79:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100fdf7e:	33 c5                	xor    eax,ebp
100fdf80:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fdf83:	83 3d c4 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c4,0x0
100fdf8a:	0f 85 50 03 00 00    	jne    0x100fe2e0
100fdf90:	68 00 60 00 00       	push   0x6000
100fdf95:	6a 00                	push   0x0
100fdf97:	68 c0 68 22 10       	push   0x102268c0
100fdf9c:	e8 ef 14 04 00       	call   0x1013f490
100fdfa1:	68 a0 28 00 00       	push   0x28a0
100fdfa6:	6a 00                	push   0x0
100fdfa8:	68 c8 c8 22 10       	push   0x1022c8c8
100fdfad:	c7 05 c0 c8 22 10 00 	mov    DWORD PTR ds:0x1022c8c0,0x0
100fdfb4:	00 00 00 
100fdfb7:	e8 d4 14 04 00       	call   0x1013f490
100fdfbc:	68 00 02 00 00       	push   0x200
100fdfc1:	8d 85 bc fd ff ff    	lea    eax,[ebp-0x244]
100fdfc7:	6a 00                	push   0x0
100fdfc9:	50                   	push   eax
100fdfca:	e8 c1 14 04 00       	call   0x1013f490
100fdfcf:	6a 40                	push   0x40
100fdfd1:	8d 45 bc             	lea    eax,[ebp-0x44]
100fdfd4:	6a 00                	push   0x0
100fdfd6:	50                   	push   eax
100fdfd7:	e8 b4 14 04 00       	call   0x1013f490
100fdfdc:	83 c4 30             	add    esp,0x30
100fdfdf:	c7 85 b8 fd ff ff ff 	mov    DWORD PTR [ebp-0x248],0xffffffff
100fdfe6:	ff ff ff 
100fdfe9:	83 3d 0c 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f0c,0x0
100fdff0:	8d 85 b0 fd ff ff    	lea    eax,[ebp-0x250]
100fdff6:	c7 85 a8 fd ff ff 00 	mov    DWORD PTR [ebp-0x258],0x0
100fdffd:	00 00 00 
100fe000:	50                   	push   eax
100fe001:	74 07                	je     0x100fe00a
100fe003:	68 94 e9 1d 10       	push   0x101de994
100fe008:	eb 05                	jmp    0x100fe00f
100fe00a:	68 ac e9 1d 10       	push   0x101de9ac
100fe00f:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
100fe015:	83 c4 08             	add    esp,0x8
100fe018:	89 85 ac fd ff ff    	mov    DWORD PTR [ebp-0x254],eax
100fe01e:	85 c0                	test   eax,eax
100fe020:	0f 84 ba 02 00 00    	je     0x100fe2e0
100fe026:	56                   	push   esi
100fe027:	68 ff 01 00 00       	push   0x1ff
100fe02c:	8d 8d bc fd ff ff    	lea    ecx,[ebp-0x244]
100fe032:	51                   	push   ecx
100fe033:	8d 8d a8 fd ff ff    	lea    ecx,[ebp-0x258]
100fe039:	51                   	push   ecx
100fe03a:	ff b5 b0 fd ff ff    	push   DWORD PTR [ebp-0x250]
100fe040:	50                   	push   eax
100fe041:	e8 ca 23 00 00       	call   0x10100410
100fe046:	83 c4 14             	add    esp,0x14
100fe049:	85 c0                	test   eax,eax
100fe04b:	0f 84 49 02 00 00    	je     0x100fe29a
100fe051:	b8 d8 c8 22 10       	mov    eax,0x1022c8d8
100fe056:	83 e8 34             	sub    eax,0x34
100fe059:	53                   	push   ebx
100fe05a:	89 85 b4 fd ff ff    	mov    DWORD PTR [ebp-0x24c],eax
100fe060:	57                   	push   edi
100fe061:	33 ff                	xor    edi,edi
100fe063:	80 bd bc fd ff ff 00 	cmp    BYTE PTR [ebp-0x244],0x0
100fe06a:	74 19                	je     0x100fe085
100fe06c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100fe070:	80 bc 3d bc fd ff ff 	cmp    BYTE PTR [ebp+edi*1-0x244],0x20
100fe077:	20 
100fe078:	75 0b                	jne    0x100fe085
100fe07a:	47                   	inc    edi
100fe07b:	80 bc 3d bc fd ff ff 	cmp    BYTE PTR [ebp+edi*1-0x244],0x0
100fe082:	00 
100fe083:	75 eb                	jne    0x100fe070
100fe085:	8d 9d bc fd ff ff    	lea    ebx,[ebp-0x244]
100fe08b:	03 df                	add    ebx,edi
100fe08d:	8a 03                	mov    al,BYTE PTR [ebx]
100fe08f:	84 c0                	test   al,al
100fe091:	0f 84 b9 01 00 00    	je     0x100fe250
100fe097:	3c 2f                	cmp    al,0x2f
100fe099:	0f 84 b1 01 00 00    	je     0x100fe250
100fe09f:	0f be c0             	movsx  eax,al
100fe0a2:	50                   	push   eax
100fe0a3:	e8 18 ed 06 00       	call   0x1016cdc0
100fe0a8:	83 c4 04             	add    esp,0x4
100fe0ab:	85 c0                	test   eax,eax
100fe0ad:	0f 84 9d 01 00 00    	je     0x100fe250
100fe0b3:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
100fe0b6:	8b f7                	mov    esi,edi
100fe0b8:	74 1b                	je     0x100fe0d5
100fe0ba:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100fe0c0:	80 bc 35 bc fd ff ff 	cmp    BYTE PTR [ebp+esi*1-0x244],0x20
100fe0c7:	20 
100fe0c8:	74 0b                	je     0x100fe0d5
100fe0ca:	46                   	inc    esi
100fe0cb:	80 bc 35 bc fd ff ff 	cmp    BYTE PTR [ebp+esi*1-0x244],0x0
100fe0d2:	00 
100fe0d3:	75 eb                	jne    0x100fe0c0
100fe0d5:	80 bc 35 bc fd ff ff 	cmp    BYTE PTR [ebp+esi*1-0x244],0x0
100fe0dc:	00 
100fe0dd:	0f 84 6d 01 00 00    	je     0x100fe250
100fe0e3:	81 3d c0 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c0,0x600
100fe0ea:	06 00 00 
100fe0ed:	0f 8f 95 01 00 00    	jg     0x100fe288
100fe0f3:	81 fe 00 02 00 00    	cmp    esi,0x200
100fe0f9:	0f 83 ef 01 00 00    	jae    0x100fe2ee
100fe0ff:	8b cb                	mov    ecx,ebx
100fe101:	c6 84 35 bc fd ff ff 	mov    BYTE PTR [ebp+esi*1-0x244],0x0
100fe108:	00 
100fe109:	8d 51 01             	lea    edx,[ecx+0x1]
100fe10c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100fe110:	8a 01                	mov    al,BYTE PTR [ecx]
100fe112:	41                   	inc    ecx
100fe113:	84 c0                	test   al,al
100fe115:	75 f9                	jne    0x100fe110
100fe117:	2b ca                	sub    ecx,edx
100fe119:	83 f9 10             	cmp    ecx,0x10
100fe11c:	72 13                	jb     0x100fe131
100fe11e:	6a 0f                	push   0xf
100fe120:	53                   	push   ebx
100fe121:	68 e8 e9 1d 10       	push   0x101de9e8
100fe126:	6a 03                	push   0x3
100fe128:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fe12e:	83 c4 10             	add    esp,0x10
100fe131:	a1 c0 c8 22 10       	mov    eax,ds:0x1022c8c0
100fe136:	8b cb                	mov    ecx,ebx
100fe138:	8b d0                	mov    edx,eax
100fe13a:	40                   	inc    eax
100fe13b:	c1 e2 04             	shl    edx,0x4
100fe13e:	81 c2 c0 68 22 10    	add    edx,0x102268c0
100fe144:	a3 c0 c8 22 10       	mov    ds:0x1022c8c0,eax
100fe149:	2b d3                	sub    edx,ebx
100fe14b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100fe150:	8a 01                	mov    al,BYTE PTR [ecx]
100fe152:	8d 49 01             	lea    ecx,[ecx+0x1]
100fe155:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100fe159:	84 c0                	test   al,al
100fe15b:	75 f3                	jne    0x100fe150
100fe15d:	4e                   	dec    esi
100fe15e:	3b f7                	cmp    esi,edi
100fe160:	0f 8e ea 00 00 00    	jle    0x100fe250
100fe166:	0f be 84 35 bc fd ff 	movsx  eax,BYTE PTR [ebp+esi*1-0x244]
100fe16d:	ff 
100fe16e:	50                   	push   eax
100fe16f:	e8 0c ee 06 00       	call   0x1016cf80
100fe174:	83 c4 04             	add    esp,0x4
100fe177:	85 c0                	test   eax,eax
100fe179:	0f 84 d1 00 00 00    	je     0x100fe250
100fe17f:	90                   	nop
100fe180:	0f be 84 35 bc fd ff 	movsx  eax,BYTE PTR [ebp+esi*1-0x244]
100fe187:	ff 
100fe188:	50                   	push   eax
100fe189:	e8 f2 ed 06 00       	call   0x1016cf80
100fe18e:	83 c4 04             	add    esp,0x4
100fe191:	85 c0                	test   eax,eax
100fe193:	74 0a                	je     0x100fe19f
100fe195:	4e                   	dec    esi
100fe196:	3b f7                	cmp    esi,edi
100fe198:	7f e6                	jg     0x100fe180
100fe19a:	e9 b1 00 00 00       	jmp    0x100fe250
100fe19f:	46                   	inc    esi
100fe1a0:	81 fe 00 02 00 00    	cmp    esi,0x200
100fe1a6:	0f 83 42 01 00 00    	jae    0x100fe2ee
100fe1ac:	c6 84 35 bc fd ff ff 	mov    BYTE PTR [ebp+esi*1-0x244],0x0
100fe1b3:	00 
100fe1b4:	8d 45 bc             	lea    eax,[ebp-0x44]
100fe1b7:	8b cb                	mov    ecx,ebx
100fe1b9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100fe1c0:	8a 10                	mov    dl,BYTE PTR [eax]
100fe1c2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100fe1c4:	75 1a                	jne    0x100fe1e0
100fe1c6:	84 d2                	test   dl,dl
100fe1c8:	74 12                	je     0x100fe1dc
100fe1ca:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100fe1cd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100fe1d0:	75 0e                	jne    0x100fe1e0
100fe1d2:	83 c0 02             	add    eax,0x2
100fe1d5:	83 c1 02             	add    ecx,0x2
100fe1d8:	84 d2                	test   dl,dl
100fe1da:	75 e4                	jne    0x100fe1c0
100fe1dc:	33 c0                	xor    eax,eax
100fe1de:	eb 05                	jmp    0x100fe1e5
100fe1e0:	1b c0                	sbb    eax,eax
100fe1e2:	83 c8 01             	or     eax,0x1
100fe1e5:	85 c0                	test   eax,eax
100fe1e7:	74 56                	je     0x100fe23f
100fe1e9:	8b b5 b4 fd ff ff    	mov    esi,DWORD PTR [ebp-0x24c]
100fe1ef:	ff 85 b8 fd ff ff    	inc    DWORD PTR [ebp-0x248]
100fe1f5:	83 c6 34             	add    esi,0x34
100fe1f8:	89 b5 b4 fd ff ff    	mov    DWORD PTR [ebp-0x24c],esi
100fe1fe:	81 fe 78 f1 22 10    	cmp    esi,0x1022f178
100fe204:	7d 7b                	jge    0x100fe281
100fe206:	8b d6                	mov    edx,esi
100fe208:	8b cb                	mov    ecx,ebx
100fe20a:	2b d3                	sub    edx,ebx
100fe20c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100fe210:	8a 01                	mov    al,BYTE PTR [ecx]
100fe212:	8d 49 01             	lea    ecx,[ecx+0x1]
100fe215:	88 44 0a ef          	mov    BYTE PTR [edx+ecx*1-0x11],al
100fe219:	84 c0                	test   al,al
100fe21b:	75 f3                	jne    0x100fe210
100fe21d:	8d 4d bc             	lea    ecx,[ebp-0x44]
100fe220:	c7 06 01 00 00 00    	mov    DWORD PTR [esi],0x1
100fe226:	2b cb                	sub    ecx,ebx
100fe228:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100fe22f:	00 
100fe230:	8a 03                	mov    al,BYTE PTR [ebx]
100fe232:	8d 5b 01             	lea    ebx,[ebx+0x1]
100fe235:	88 44 19 ff          	mov    BYTE PTR [ecx+ebx*1-0x1],al
100fe239:	84 c0                	test   al,al
100fe23b:	75 f3                	jne    0x100fe230
100fe23d:	eb 11                	jmp    0x100fe250
100fe23f:	83 bd b8 fd ff ff 00 	cmp    DWORD PTR [ebp-0x248],0x0
100fe246:	7c 08                	jl     0x100fe250
100fe248:	8b 9d b4 fd ff ff    	mov    ebx,DWORD PTR [ebp-0x24c]
100fe24e:	ff 03                	inc    DWORD PTR [ebx]
100fe250:	68 ff 01 00 00       	push   0x1ff
100fe255:	8d 85 bc fd ff ff    	lea    eax,[ebp-0x244]
100fe25b:	50                   	push   eax
100fe25c:	8d 85 a8 fd ff ff    	lea    eax,[ebp-0x258]
100fe262:	50                   	push   eax
100fe263:	ff b5 b0 fd ff ff    	push   DWORD PTR [ebp-0x250]
100fe269:	ff b5 ac fd ff ff    	push   DWORD PTR [ebp-0x254]
100fe26f:	e8 9c 21 00 00       	call   0x10100410
100fe274:	83 c4 14             	add    esp,0x14
100fe277:	85 c0                	test   eax,eax
100fe279:	0f 85 e2 fd ff ff    	jne    0x100fe061
100fe27f:	eb 17                	jmp    0x100fe298
100fe281:	68 0c ea 1d 10       	push   0x101dea0c
100fe286:	eb 05                	jmp    0x100fe28d
100fe288:	68 c0 e9 1d 10       	push   0x101de9c0
100fe28d:	6a 04                	push   0x4
100fe28f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fe295:	83 c4 08             	add    esp,0x8
100fe298:	5f                   	pop    edi
100fe299:	5b                   	pop    ebx
100fe29a:	ff b5 ac fd ff ff    	push   DWORD PTR [ebp-0x254]
100fe2a0:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100fe2a6:	83 c4 04             	add    esp,0x4
100fe2a9:	c7 05 c4 c8 22 10 01 	mov    DWORD PTR ds:0x1022c8c4,0x1
100fe2b0:	00 00 00 
100fe2b3:	83 3d d8 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8d8,0x0
100fe2ba:	74 23                	je     0x100fe2df
100fe2bc:	be d8 c8 22 10       	mov    esi,0x1022c8d8
100fe2c1:	81 fe 78 f1 22 10    	cmp    esi,0x1022f178
100fe2c7:	7d 16                	jge    0x100fe2df
100fe2c9:	ff 36                	push   DWORD PTR [esi]
100fe2cb:	8d 46 04             	lea    eax,[esi+0x4]
100fe2ce:	50                   	push   eax
100fe2cf:	e8 2c 1d 00 00       	call   0x10100000
100fe2d4:	83 c6 34             	add    esi,0x34
100fe2d7:	83 c4 08             	add    esp,0x8
100fe2da:	83 3e 00             	cmp    DWORD PTR [esi],0x0
100fe2dd:	75 e2                	jne    0x100fe2c1
100fe2df:	5e                   	pop    esi
100fe2e0:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe2e3:	33 cd                	xor    ecx,ebp
100fe2e5:	e8 c9 f8 03 00       	call   0x1013dbb3
100fe2ea:	8b e5                	mov    esp,ebp
100fe2ec:	5d                   	pop    ebp
100fe2ed:	c3                   	ret
100fe2ee:	e8 55 fa 03 00       	call   0x1013dd48
