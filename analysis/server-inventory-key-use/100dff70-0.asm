
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dff70 <.text+0xdef70>:
100dff70:	55                   	push   ebp
100dff71:	8b ec                	mov    ebp,esp
100dff73:	81 ec 10 02 00 00    	sub    esp,0x210
100dff79:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100dff7e:	33 c5                	xor    eax,ebp
100dff80:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100dff83:	53                   	push   ebx
100dff84:	56                   	push   esi
100dff85:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
100dff88:	8d 85 f8 fd ff ff    	lea    eax,[ebp-0x208]
100dff8e:	50                   	push   eax
100dff8f:	56                   	push   esi
100dff90:	89 8d f0 fd ff ff    	mov    DWORD PTR [ebp-0x210],ecx
100dff96:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
100dff9c:	8b d8                	mov    ebx,eax
100dff9e:	83 c4 08             	add    esp,0x8
100dffa1:	85 db                	test   ebx,ebx
100dffa3:	0f 84 ec 01 00 00    	je     0x100e0195
100dffa9:	83 bd f8 fd ff ff 00 	cmp    DWORD PTR [ebp-0x208],0x0
100dffb0:	0f 84 df 01 00 00    	je     0x100e0195
100dffb6:	53                   	push   ebx
100dffb7:	e8 24 6e fe ff       	call   0x100c6de0
100dffbc:	ba a8 31 22 10       	mov    edx,0x102231a8
100dffc1:	8b f0                	mov    esi,eax
100dffc3:	83 c4 04             	add    esp,0x4
100dffc6:	8d 42 01             	lea    eax,[edx+0x1]
100dffc9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100dffd0:	8a 0a                	mov    cl,BYTE PTR [edx]
100dffd2:	42                   	inc    edx
100dffd3:	84 c9                	test   cl,cl
100dffd5:	75 f9                	jne    0x100dffd0
100dffd7:	57                   	push   edi
100dffd8:	2b d0                	sub    edx,eax
100dffda:	0f 84 51 01 00 00    	je     0x100e0131
100dffe0:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100dffe3:	33 c9                	xor    ecx,ecx
100dffe5:	66 66 66 0f 1f 84 00 	data16 data16 nop WORD PTR [eax+eax*1+0x0]
100dffec:	00 00 00 00 
100dfff0:	8a 81 a8 31 22 10    	mov    al,BYTE PTR [ecx+0x102231a8]
100dfff6:	8d 49 01             	lea    ecx,[ecx+0x1]
100dfff9:	88 84 0d fb fd ff ff 	mov    BYTE PTR [ebp+ecx*1-0x205],al
100e0000:	84 c0                	test   al,al
100e0002:	75 ec                	jne    0x100dfff0
100e0004:	56                   	push   esi
100e0005:	e8 d6 6d fe ff       	call   0x100c6de0
100e000a:	83 c4 04             	add    esp,0x4
100e000d:	80 3d a8 31 22 10 7b 	cmp    BYTE PTR ds:0x102231a8,0x7b
100e0014:	0f 85 ed 00 00 00    	jne    0x100e0107
100e001a:	50                   	push   eax
100e001b:	e8 c0 6d fe ff       	call   0x100c6de0
100e0020:	83 c4 04             	add    esp,0x4
100e0023:	8b f0                	mov    esi,eax
100e0025:	80 3d a8 31 22 10 7d 	cmp    BYTE PTR ds:0x102231a8,0x7d
100e002c:	0f 84 8f 00 00 00    	je     0x100e00c1
100e0032:	ba a8 31 22 10       	mov    edx,0x102231a8
100e0037:	b9 e0 17 1b 10       	mov    ecx,0x101b17e0
100e003c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100e0040:	8a 01                	mov    al,BYTE PTR [ecx]
100e0042:	3a 02                	cmp    al,BYTE PTR [edx]
100e0044:	75 1a                	jne    0x100e0060
100e0046:	84 c0                	test   al,al
100e0048:	74 12                	je     0x100e005c
100e004a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100e004d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100e0050:	75 0e                	jne    0x100e0060
100e0052:	83 c1 02             	add    ecx,0x2
100e0055:	83 c2 02             	add    edx,0x2
100e0058:	84 c0                	test   al,al
100e005a:	75 e4                	jne    0x100e0040
100e005c:	33 c0                	xor    eax,eax
100e005e:	eb 05                	jmp    0x100e0065
100e0060:	1b c0                	sbb    eax,eax
100e0062:	83 c8 01             	or     eax,0x1
100e0065:	85 c0                	test   eax,eax
100e0067:	75 40                	jne    0x100e00a9
100e0069:	56                   	push   esi
100e006a:	e8 71 6d fe ff       	call   0x100c6de0
100e006f:	8b f0                	mov    esi,eax
100e0071:	83 c4 04             	add    esp,0x4
100e0074:	8b cf                	mov    ecx,edi
100e0076:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
100e007c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100e0080:	8a 10                	mov    dl,BYTE PTR [eax]
100e0082:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e0084:	75 1a                	jne    0x100e00a0
100e0086:	84 d2                	test   dl,dl
100e0088:	74 12                	je     0x100e009c
100e008a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e008d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e0090:	75 0e                	jne    0x100e00a0
100e0092:	83 c0 02             	add    eax,0x2
100e0095:	83 c1 02             	add    ecx,0x2
100e0098:	84 d2                	test   dl,dl
100e009a:	75 e4                	jne    0x100e0080
100e009c:	33 c0                	xor    eax,eax
100e009e:	eb 05                	jmp    0x100e00a5
100e00a0:	1b c0                	sbb    eax,eax
100e00a2:	83 c8 01             	or     eax,0x1
100e00a5:	85 c0                	test   eax,eax
100e00a7:	74 3c                	je     0x100e00e5
100e00a9:	56                   	push   esi
100e00aa:	e8 31 6d fe ff       	call   0x100c6de0
100e00af:	83 c4 04             	add    esp,0x4
100e00b2:	8b f0                	mov    esi,eax
100e00b4:	80 3d a8 31 22 10 7d 	cmp    BYTE PTR ds:0x102231a8,0x7d
100e00bb:	0f 85 71 ff ff ff    	jne    0x100e0032
100e00c1:	56                   	push   esi
100e00c2:	e8 19 6d fe ff       	call   0x100c6de0
100e00c7:	b9 a8 31 22 10       	mov    ecx,0x102231a8
100e00cc:	83 c4 04             	add    esp,0x4
100e00cf:	8b f0                	mov    esi,eax
100e00d1:	8d 51 01             	lea    edx,[ecx+0x1]
100e00d4:	8a 01                	mov    al,BYTE PTR [ecx]
100e00d6:	41                   	inc    ecx
100e00d7:	84 c0                	test   al,al
100e00d9:	75 f9                	jne    0x100e00d4
100e00db:	2b ca                	sub    ecx,edx
100e00dd:	0f 85 00 ff ff ff    	jne    0x100dffe3
100e00e3:	eb 4c                	jmp    0x100e0131
100e00e5:	53                   	push   ebx
100e00e6:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100e00ec:	83 c4 04             	add    esp,0x4
100e00ef:	b8 a8 31 22 10       	mov    eax,0x102231a8
100e00f4:	5f                   	pop    edi
100e00f5:	5e                   	pop    esi
100e00f6:	5b                   	pop    ebx
100e00f7:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e00fa:	33 cd                	xor    ecx,ebp
100e00fc:	e8 b2 da 05 00       	call   0x1013dbb3
100e0101:	8b e5                	mov    esp,ebp
100e0103:	5d                   	pop    ebp
100e0104:	c2 08 00             	ret    0x8
100e0107:	68 74 17 1b 10       	push   0x101b1774
100e010c:	6a 01                	push   0x1
100e010e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e0114:	68 a8 17 1b 10       	push   0x101b17a8
100e0119:	6a 01                	push   0x1
100e011b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e0121:	68 74 17 1b 10       	push   0x101b1774
100e0126:	6a 01                	push   0x1
100e0128:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e012e:	83 c4 18             	add    esp,0x18
100e0131:	53                   	push   ebx
100e0132:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100e0138:	8b 85 f0 fd ff ff    	mov    eax,DWORD PTR [ebp-0x210]
100e013e:	83 ec 14             	sub    esp,0x14
100e0141:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100e0144:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100e0149:	0f 5a c0             	cvtps2pd xmm0,xmm0
100e014c:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
100e0152:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
100e0157:	0f 5a c0             	cvtps2pd xmm0,xmm0
100e015a:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
100e0160:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100e0165:	0f 5a c0             	cvtps2pd xmm0,xmm0
100e0168:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100e016d:	68 e8 17 1b 10       	push   0x101b17e8
100e0172:	6a 01                	push   0x1
100e0174:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e017a:	83 c4 20             	add    esp,0x20
100e017d:	b8 96 24 1a 10       	mov    eax,0x101a2496
100e0182:	5f                   	pop    edi
100e0183:	5e                   	pop    esi
100e0184:	5b                   	pop    ebx
100e0185:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e0188:	33 cd                	xor    ecx,ebp
100e018a:	e8 24 da 05 00       	call   0x1013dbb3
100e018f:	8b e5                	mov    esp,ebp
100e0191:	5d                   	pop    ebp
100e0192:	c2 08 00             	ret    0x8
100e0195:	68 74 17 1b 10       	push   0x101b1774
100e019a:	6a 01                	push   0x1
100e019c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e01a2:	56                   	push   esi
100e01a3:	68 78 17 1b 10       	push   0x101b1778
100e01a8:	6a 01                	push   0x1
100e01aa:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e01b0:	68 74 17 1b 10       	push   0x101b1774
100e01b5:	6a 01                	push   0x1
100e01b7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e01bd:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100e01c0:	83 c4 1c             	add    esp,0x1c
100e01c3:	33 cd                	xor    ecx,ebp
100e01c5:	b8 96 24 1a 10       	mov    eax,0x101a2496
100e01ca:	5e                   	pop    esi
100e01cb:	5b                   	pop    ebx
100e01cc:	e8 e2 d9 05 00       	call   0x1013dbb3
100e01d1:	8b e5                	mov    esp,ebp
100e01d3:	5d                   	pop    ebp
100e01d4:	c2 08 00             	ret    0x8
