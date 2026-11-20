
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

1003bf20 <.text+0x3af20>:
1003bf20:	55                   	push   ebp
1003bf21:	8b ec                	mov    ebp,esp
1003bf23:	81 ec a0 02 00 00    	sub    esp,0x2a0
1003bf29:	a1 00 06 19 10       	mov    eax,ds:0x10190600
1003bf2e:	33 c5                	xor    eax,ebp
1003bf30:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1003bf33:	53                   	push   ebx
1003bf34:	56                   	push   esi
1003bf35:	57                   	push   edi
1003bf36:	8b f9                	mov    edi,ecx
1003bf38:	89 bd 68 fd ff ff    	mov    DWORD PTR [ebp-0x298],edi
1003bf3e:	8b 8f 64 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe64]
1003bf44:	8b 01                	mov    eax,DWORD PTR [ecx]
1003bf46:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003bf49:	ff d0                	call   eax
1003bf4b:	84 c0                	test   al,al
1003bf4d:	0f 84 dd 00 00 00    	je     0x1003c030
1003bf53:	80 bf 6c 0e 00 00 00 	cmp    BYTE PTR [edi+0xe6c],0x0
1003bf5a:	8b 87 70 0e 00 00    	mov    eax,DWORD PTR [edi+0xe70]
1003bf60:	74 49                	je     0x1003bfab
1003bf62:	85 c0                	test   eax,eax
1003bf64:	7e 0b                	jle    0x1003bf71
1003bf66:	83 c0 fe             	add    eax,0xfffffffe
1003bf69:	89 87 70 0e 00 00    	mov    DWORD PTR [edi+0xe70],eax
1003bf6f:	85 c0                	test   eax,eax
1003bf71:	79 0c                	jns    0x1003bf7f
1003bf73:	c7 87 70 0e 00 00 00 	mov    DWORD PTR [edi+0xe70],0x0
1003bf7a:	00 00 00 
1003bf7d:	33 c0                	xor    eax,eax
1003bf7f:	8b b7 68 0e 00 00    	mov    esi,DWORD PTR [edi+0xe68]
1003bf85:	83 ec 0c             	sub    esp,0xc
1003bf88:	8b cc                	mov    ecx,esp
1003bf8a:	50                   	push   eax
1003bf8b:	68 ff 00 00 00       	push   0xff
1003bf90:	68 ff 00 00 00       	push   0xff
1003bf95:	68 ff 00 00 00       	push   0xff
1003bf9a:	e8 f1 78 07 00       	call   0x100b3890
1003bf9f:	8b 06                	mov    eax,DWORD PTR [esi]
1003bfa1:	8b ce                	mov    ecx,esi
1003bfa3:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003bfa6:	e9 85 00 00 00       	jmp    0x1003c030
1003bfab:	3d ff 00 00 00       	cmp    eax,0xff
1003bfb0:	7d 09                	jge    0x1003bfbb
1003bfb2:	83 c0 02             	add    eax,0x2
1003bfb5:	89 87 70 0e 00 00    	mov    DWORD PTR [edi+0xe70],eax
1003bfbb:	8b b7 68 0e 00 00    	mov    esi,DWORD PTR [edi+0xe68]
1003bfc1:	83 ec 0c             	sub    esp,0xc
1003bfc4:	8b cc                	mov    ecx,esp
1003bfc6:	50                   	push   eax
1003bfc7:	68 ff 00 00 00       	push   0xff
1003bfcc:	68 ff 00 00 00       	push   0xff
1003bfd1:	68 ff 00 00 00       	push   0xff
1003bfd6:	e8 b5 78 07 00       	call   0x100b3890
1003bfdb:	8b 06                	mov    eax,DWORD PTR [esi]
1003bfdd:	8b ce                	mov    ecx,esi
1003bfdf:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003bfe2:	81 bf 70 0e 00 00 ff 	cmp    DWORD PTR [edi+0xe70],0xff
1003bfe9:	00 00 00 
1003bfec:	7c 42                	jl     0x1003c030
1003bfee:	8b b7 68 0e 00 00    	mov    esi,DWORD PTR [edi+0xe68]
1003bff4:	83 ec 0c             	sub    esp,0xc
1003bff7:	8b cc                	mov    ecx,esp
1003bff9:	c7 87 70 0e 00 00 ff 	mov    DWORD PTR [edi+0xe70],0xff
1003c000:	00 00 00 
1003c003:	68 ff 00 00 00       	push   0xff
1003c008:	68 ff 00 00 00       	push   0xff
1003c00d:	68 ff 00 00 00       	push   0xff
1003c012:	68 ff 00 00 00       	push   0xff
1003c017:	e8 74 78 07 00       	call   0x100b3890
1003c01c:	8b 06                	mov    eax,DWORD PTR [esi]
1003c01e:	8b ce                	mov    ecx,esi
1003c020:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003c023:	8b 8f 64 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe64]
1003c029:	6a 00                	push   0x0
1003c02b:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c02d:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c030:	80 bf f0 03 00 00 00 	cmp    BYTE PTR [edi+0x3f0],0x0
1003c037:	0f 84 fa 01 00 00    	je     0x1003c237
1003c03d:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003c043:	d9 9d 90 fd ff ff    	fstp   DWORD PTR [ebp-0x270]
1003c049:	f3 0f 10 85 90 fd ff 	movss  xmm0,DWORD PTR [ebp-0x270]
1003c050:	ff 
1003c051:	0f 2f 87 6c 03 00 00 	comiss xmm0,DWORD PTR [edi+0x36c]
1003c058:	0f 86 d9 01 00 00    	jbe    0x1003c237
1003c05e:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003c064:	dc 05 40 ee 13 10    	fadd   QWORD PTR ds:0x1013ee40
1003c06a:	8b 8f a4 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a4]
1003c070:	8d 95 8c fd ff ff    	lea    edx,[ebp-0x274]
1003c076:	52                   	push   edx
1003c077:	8d 95 84 fd ff ff    	lea    edx,[ebp-0x27c]
1003c07d:	52                   	push   edx
1003c07e:	8d 95 94 fd ff ff    	lea    edx,[ebp-0x26c]
1003c084:	d9 9f 6c 03 00 00    	fstp   DWORD PTR [edi+0x36c]
1003c08a:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c08c:	52                   	push   edx
1003c08d:	8d 95 88 fd ff ff    	lea    edx,[ebp-0x278]
1003c093:	52                   	push   edx
1003c094:	ff 90 38 01 00 00    	call   DWORD PTR [eax+0x138]
1003c09a:	8b 95 88 fd ff ff    	mov    edx,DWORD PTR [ebp-0x278]
1003c0a0:	81 fa ff 00 00 00    	cmp    edx,0xff
1003c0a6:	7d 16                	jge    0x1003c0be
1003c0a8:	83 85 84 fd ff ff 05 	add    DWORD PTR [ebp-0x27c],0x5
1003c0af:	83 c2 05             	add    edx,0x5
1003c0b2:	89 95 88 fd ff ff    	mov    DWORD PTR [ebp-0x278],edx
1003c0b8:	81 fa ff 00 00 00    	cmp    edx,0xff
1003c0be:	7e 3e                	jle    0x1003c0fe
1003c0c0:	ff b5 8c fd ff ff    	push   DWORD PTR [ebp-0x274]
1003c0c6:	8b 8f a4 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a4]
1003c0cc:	68 ff 00 00 00       	push   0xff
1003c0d1:	ff b5 94 fd ff ff    	push   DWORD PTR [ebp-0x26c]
1003c0d7:	c7 85 84 fd ff ff ff 	mov    DWORD PTR [ebp-0x27c],0xff
1003c0de:	00 00 00 
1003c0e1:	c7 85 88 fd ff ff ff 	mov    DWORD PTR [ebp-0x278],0xff
1003c0e8:	00 00 00 
1003c0eb:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c0ed:	68 ff 00 00 00       	push   0xff
1003c0f2:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c0f8:	8b 95 88 fd ff ff    	mov    edx,DWORD PTR [ebp-0x278]
1003c0fe:	83 3d d8 2b 1b 10 00 	cmp    DWORD PTR ds:0x101b2bd8,0x0
1003c105:	74 1b                	je     0x1003c122
1003c107:	33 f6                	xor    esi,esi
1003c109:	ba 80 00 00 00       	mov    edx,0x80
1003c10e:	89 95 88 fd ff ff    	mov    DWORD PTR [ebp-0x278],edx
1003c114:	89 b5 94 fd ff ff    	mov    DWORD PTR [ebp-0x26c],esi
1003c11a:	89 b5 84 fd ff ff    	mov    DWORD PTR [ebp-0x27c],esi
1003c120:	eb 06                	jmp    0x1003c128
1003c122:	8b b5 94 fd ff ff    	mov    esi,DWORD PTR [ebp-0x26c]
1003c128:	ff b5 8c fd ff ff    	push   DWORD PTR [ebp-0x274]
1003c12e:	8b 8f a4 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a4]
1003c134:	ff b5 84 fd ff ff    	push   DWORD PTR [ebp-0x27c]
1003c13a:	56                   	push   esi
1003c13b:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c13d:	52                   	push   edx
1003c13e:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c144:	be ec 02 00 00       	mov    esi,0x2ec
1003c149:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1003c150:	8b 0c 3e             	mov    ecx,DWORD PTR [esi+edi*1]
1003c153:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c155:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c158:	ff d0                	call   eax
1003c15a:	84 c0                	test   al,al
1003c15c:	0f 84 c6 00 00 00    	je     0x1003c228
1003c162:	8b 0c 3e             	mov    ecx,DWORD PTR [esi+edi*1]
1003c165:	8d 95 8c fd ff ff    	lea    edx,[ebp-0x274]
1003c16b:	52                   	push   edx
1003c16c:	8d 95 84 fd ff ff    	lea    edx,[ebp-0x27c]
1003c172:	52                   	push   edx
1003c173:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c175:	8d 95 94 fd ff ff    	lea    edx,[ebp-0x26c]
1003c17b:	52                   	push   edx
1003c17c:	8d 95 88 fd ff ff    	lea    edx,[ebp-0x278]
1003c182:	52                   	push   edx
1003c183:	ff 90 38 01 00 00    	call   DWORD PTR [eax+0x138]
1003c189:	8b 8d 8c fd ff ff    	mov    ecx,DWORD PTR [ebp-0x274]
1003c18f:	8b 14 3e             	mov    edx,DWORD PTR [esi+edi*1]
1003c192:	83 c1 0f             	add    ecx,0xf
1003c195:	89 8d 8c fd ff ff    	mov    DWORD PTR [ebp-0x274],ecx
1003c19b:	81 f9 ff 00 00 00    	cmp    ecx,0xff
1003c1a1:	7e 37                	jle    0x1003c1da
1003c1a3:	68 ff 00 00 00       	push   0xff
1003c1a8:	ff b5 84 fd ff ff    	push   DWORD PTR [ebp-0x27c]
1003c1ae:	c7 85 8c fd ff ff ff 	mov    DWORD PTR [ebp-0x274],0xff
1003c1b5:	00 00 00 
1003c1b8:	8b ca                	mov    ecx,edx
1003c1ba:	ff b5 94 fd ff ff    	push   DWORD PTR [ebp-0x26c]
1003c1c0:	8b 02                	mov    eax,DWORD PTR [edx]
1003c1c2:	ff b5 88 fd ff ff    	push   DWORD PTR [ebp-0x278]
1003c1c8:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c1ce:	8b 0c 3e             	mov    ecx,DWORD PTR [esi+edi*1]
1003c1d1:	6a 00                	push   0x0
1003c1d3:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c1d5:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c1d8:	eb 4e                	jmp    0x1003c228
1003c1da:	8b 02                	mov    eax,DWORD PTR [edx]
1003c1dc:	51                   	push   ecx
1003c1dd:	ff b5 84 fd ff ff    	push   DWORD PTR [ebp-0x27c]
1003c1e3:	8b ca                	mov    ecx,edx
1003c1e5:	ff b5 94 fd ff ff    	push   DWORD PTR [ebp-0x26c]
1003c1eb:	ff b5 88 fd ff ff    	push   DWORD PTR [ebp-0x278]
1003c1f1:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c1f7:	8b 0c 3e             	mov    ecx,DWORD PTR [esi+edi*1]
1003c1fa:	8d 95 7c fd ff ff    	lea    edx,[ebp-0x284]
1003c200:	52                   	push   edx
1003c201:	8d 95 90 fd ff ff    	lea    edx,[ebp-0x270]
1003c207:	52                   	push   edx
1003c208:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c20a:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003c20d:	8b 95 90 fd ff ff    	mov    edx,DWORD PTR [ebp-0x270]
1003c213:	8b 0c 3e             	mov    ecx,DWORD PTR [esi+edi*1]
1003c216:	42                   	inc    edx
1003c217:	ff b5 7c fd ff ff    	push   DWORD PTR [ebp-0x284]
1003c21d:	89 95 90 fd ff ff    	mov    DWORD PTR [ebp-0x270],edx
1003c223:	52                   	push   edx
1003c224:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c226:	ff 10                	call   DWORD PTR [eax]
1003c228:	83 c6 04             	add    esi,0x4
1003c22b:	81 fe 6c 03 00 00    	cmp    esi,0x36c
1003c231:	0f 8c 19 ff ff ff    	jl     0x1003c150
1003c237:	83 bf 88 03 00 00 00 	cmp    DWORD PTR [edi+0x388],0x0
1003c23e:	0f 84 84 01 00 00    	je     0x1003c3c8
1003c244:	80 bf 9c 03 00 00 00 	cmp    BYTE PTR [edi+0x39c],0x0
1003c24b:	0f 84 77 01 00 00    	je     0x1003c3c8
1003c251:	68 14 68 14 10       	push   0x10146814
1003c256:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003c25b:	e8 b0 08 03 00       	call   0x1006cb10
1003c260:	85 c0                	test   eax,eax
1003c262:	74 26                	je     0x1003c28a
1003c264:	68 14 68 14 10       	push   0x10146814
1003c269:	b9 c0 a0 18 10       	mov    ecx,0x1018a0c0
1003c26e:	e8 9d 08 03 00       	call   0x1006cb10
1003c273:	50                   	push   eax
1003c274:	8d 85 9c fe ff ff    	lea    eax,[ebp-0x164]
1003c27a:	68 1c 68 14 10       	push   0x1014681c
1003c27f:	50                   	push   eax
1003c280:	e8 7b 06 fd ff       	call   0x1000c900
1003c285:	83 c4 0c             	add    esp,0xc
1003c288:	eb 42                	jmp    0x1003c2cc
1003c28a:	0f 10 05 40 68 14 10 	movups xmm0,XMMWORD PTR ds:0x10146840
1003c291:	a1 68 68 14 10       	mov    eax,ds:0x10146868
1003c296:	89 85 c4 fe ff ff    	mov    DWORD PTR [ebp-0x13c],eax
1003c29c:	a0 6c 68 14 10       	mov    al,ds:0x1014686c
1003c2a1:	0f 11 85 9c fe ff ff 	movups XMMWORD PTR [ebp-0x164],xmm0
1003c2a8:	88 85 c8 fe ff ff    	mov    BYTE PTR [ebp-0x138],al
1003c2ae:	0f 10 05 50 68 14 10 	movups xmm0,XMMWORD PTR ds:0x10146850
1003c2b5:	0f 11 85 ac fe ff ff 	movups XMMWORD PTR [ebp-0x154],xmm0
1003c2bc:	f3 0f 7e 05 60 68 14 	movq   xmm0,QWORD PTR ds:0x10146860
1003c2c3:	10 
1003c2c4:	66 0f d6 85 bc fe ff 	movq   QWORD PTR [ebp-0x144],xmm0
1003c2cb:	ff 
1003c2cc:	8b 87 84 03 00 00    	mov    eax,DWORD PTR [edi+0x384]
1003c2d2:	8d 95 9c fe ff ff    	lea    edx,[ebp-0x164]
1003c2d8:	52                   	push   edx
1003c2d9:	50                   	push   eax
1003c2da:	8b 08                	mov    ecx,DWORD PTR [eax]
1003c2dc:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003c2e2:	83 c4 08             	add    esp,0x8
1003c2e5:	be 88 03 00 00       	mov    esi,0x388
1003c2ea:	33 d2                	xor    edx,edx
1003c2ec:	bb c4 6c 55 10       	mov    ebx,0x10556cc4
1003c2f1:	89 95 90 fd ff ff    	mov    DWORD PTR [ebp-0x270],edx
1003c2f7:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1003c2f9:	85 c9                	test   ecx,ecx
1003c2fb:	74 7c                	je     0x1003c379
1003c2fd:	8d 41 01             	lea    eax,[ecx+0x1]
1003c300:	89 85 7c fd ff ff    	mov    DWORD PTR [ebp-0x284],eax
1003c306:	8a 01                	mov    al,BYTE PTR [ecx]
1003c308:	41                   	inc    ecx
1003c309:	84 c0                	test   al,al
1003c30b:	75 f9                	jne    0x1003c306
1003c30d:	2b 8d 7c fd ff ff    	sub    ecx,DWORD PTR [ebp-0x284]
1003c313:	83 f9 01             	cmp    ecx,0x1
1003c316:	72 61                	jb     0x1003c379
1003c318:	80 bc 17 9d 03 00 00 	cmp    BYTE PTR [edi+edx*1+0x39d],0x0
1003c31f:	00 
1003c320:	8b 0c 3e             	mov    ecx,DWORD PTR [esi+edi*1]
1003c323:	6a 00                	push   0x0
1003c325:	6a 00                	push   0x0
1003c327:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c329:	74 14                	je     0x1003c33f
1003c32b:	68 80 00 00 00       	push   0x80
1003c330:	6a 00                	push   0x0
1003c332:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c338:	b9 70 68 14 10       	mov    ecx,0x10146870
1003c33d:	eb 12                	jmp    0x1003c351
1003c33f:	6a 00                	push   0x0
1003c341:	68 80 00 00 00       	push   0x80
1003c346:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c34c:	b9 7c 68 14 10       	mov    ecx,0x1014687c
1003c351:	8b 03                	mov    eax,DWORD PTR [ebx]
1003c353:	50                   	push   eax
1003c354:	51                   	push   ecx
1003c355:	8d 85 9c fd ff ff    	lea    eax,[ebp-0x264]
1003c35b:	50                   	push   eax
1003c35c:	e8 9f 05 fd ff       	call   0x1000c900
1003c361:	8b 04 3e             	mov    eax,DWORD PTR [esi+edi*1]
1003c364:	8d 95 9c fd ff ff    	lea    edx,[ebp-0x264]
1003c36a:	52                   	push   edx
1003c36b:	50                   	push   eax
1003c36c:	8b 08                	mov    ecx,DWORD PTR [eax]
1003c36e:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003c374:	83 c4 14             	add    esp,0x14
1003c377:	eb 30                	jmp    0x1003c3a9
1003c379:	8b 04 3e             	mov    eax,DWORD PTR [esi+edi*1]
1003c37c:	68 88 19 14 10       	push   0x10141988
1003c381:	50                   	push   eax
1003c382:	8b 08                	mov    ecx,DWORD PTR [eax]
1003c384:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003c38a:	8b 0c 3e             	mov    ecx,DWORD PTR [esi+edi*1]
1003c38d:	83 c4 08             	add    esp,0x8
1003c390:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c392:	6a 00                	push   0x0
1003c394:	68 ff 00 00 00       	push   0xff
1003c399:	68 ff 00 00 00       	push   0xff
1003c39e:	68 ff 00 00 00       	push   0xff
1003c3a3:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c3a9:	8b 95 90 fd ff ff    	mov    edx,DWORD PTR [ebp-0x270]
1003c3af:	83 c6 04             	add    esi,0x4
1003c3b2:	42                   	inc    edx
1003c3b3:	83 c3 14             	add    ebx,0x14
1003c3b6:	89 95 90 fd ff ff    	mov    DWORD PTR [ebp-0x270],edx
1003c3bc:	81 fe 98 03 00 00    	cmp    esi,0x398
1003c3c2:	0f 8c 2f ff ff ff    	jl     0x1003c2f7
1003c3c8:	80 bf f0 03 00 00 00 	cmp    BYTE PTR [edi+0x3f0],0x0
1003c3cf:	0f 84 4e 01 00 00    	je     0x1003c523
1003c3d5:	8b 8f a4 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a4]
1003c3db:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c3dd:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c3e0:	ff d0                	call   eax
1003c3e2:	84 c0                	test   al,al
1003c3e4:	75 0d                	jne    0x1003c3f3
1003c3e6:	8b 8f a4 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a4]
1003c3ec:	6a 01                	push   0x1
1003c3ee:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c3f0:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c3f3:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003c3f9:	d9 9d 7c fd ff ff    	fstp   DWORD PTR [ebp-0x284]
1003c3ff:	f3 0f 10 85 7c fd ff 	movss  xmm0,DWORD PTR [ebp-0x284]
1003c406:	ff 
1003c407:	0f 2f 87 f4 03 00 00 	comiss xmm0,DWORD PTR [edi+0x3f4]
1003c40e:	0f 86 0f 01 00 00    	jbe    0x1003c523
1003c414:	80 bf 74 03 00 00 00 	cmp    BYTE PTR [edi+0x374],0x0
1003c41b:	0f 85 02 01 00 00    	jne    0x1003c523
1003c421:	ff 87 f8 03 00 00    	inc    DWORD PTR [edi+0x3f8]
1003c427:	8b 87 f8 03 00 00    	mov    eax,DWORD PTR [edi+0x3f8]
1003c42d:	8b 9f fc 03 00 00    	mov    ebx,DWORD PTR [edi+0x3fc]
1003c433:	83 f8 3b             	cmp    eax,0x3b
1003c436:	7e 13                	jle    0x1003c44b
1003c438:	43                   	inc    ebx
1003c439:	c7 87 f8 03 00 00 00 	mov    DWORD PTR [edi+0x3f8],0x0
1003c440:	00 00 00 
1003c443:	89 9f fc 03 00 00    	mov    DWORD PTR [edi+0x3fc],ebx
1003c449:	33 c0                	xor    eax,eax
1003c44b:	8b 8f 70 03 00 00    	mov    ecx,DWORD PTR [edi+0x370]
1003c451:	be 3c 00 00 00       	mov    esi,0x3c
1003c456:	2b f0                	sub    esi,eax
1003c458:	b8 89 88 88 88       	mov    eax,0x88888889
1003c45d:	f7 e9                	imul   ecx
1003c45f:	03 d1                	add    edx,ecx
1003c461:	c1 fa 05             	sar    edx,0x5
1003c464:	8b c2                	mov    eax,edx
1003c466:	c1 e8 1f             	shr    eax,0x1f
1003c469:	03 c2                	add    eax,edx
1003c46b:	2b c3                	sub    eax,ebx
1003c46d:	33 db                	xor    ebx,ebx
1003c46f:	83 c0 ff             	add    eax,0xffffffff
1003c472:	0f 49 d8             	cmovns ebx,eax
1003c475:	33 c9                	xor    ecx,ecx
1003c477:	85 f6                	test   esi,esi
1003c479:	0f 49 ce             	cmovns ecx,esi
1003c47c:	83 bf 00 04 00 00 00 	cmp    DWORD PTR [edi+0x400],0x0
1003c483:	7d 0a                	jge    0x1003c48f
1003c485:	c7 87 00 04 00 00 00 	mov    DWORD PTR [edi+0x400],0x0
1003c48c:	00 00 00 
1003c48f:	be 58 5b 14 10       	mov    esi,0x10145b58
1003c494:	83 f9 0a             	cmp    ecx,0xa
1003c497:	ba 54 5b 14 10       	mov    edx,0x10145b54
1003c49c:	8b c6                	mov    eax,esi
1003c49e:	51                   	push   ecx
1003c49f:	0f 4c c2             	cmovl  eax,edx
1003c4a2:	50                   	push   eax
1003c4a3:	8d 45 dc             	lea    eax,[ebp-0x24]
1003c4a6:	50                   	push   eax
1003c4a7:	e8 54 04 fd ff       	call   0x1000c900
1003c4ac:	53                   	push   ebx
1003c4ad:	83 fb 0a             	cmp    ebx,0xa
1003c4b0:	8b c6                	mov    eax,esi
1003c4b2:	bb 54 5b 14 10       	mov    ebx,0x10145b54
1003c4b7:	0f 4c c3             	cmovl  eax,ebx
1003c4ba:	50                   	push   eax
1003c4bb:	8d 45 bc             	lea    eax,[ebp-0x44]
1003c4be:	50                   	push   eax
1003c4bf:	e8 3c 04 fd ff       	call   0x1000c900
1003c4c4:	8b 87 00 04 00 00    	mov    eax,DWORD PTR [edi+0x400]
1003c4ca:	83 f8 0a             	cmp    eax,0xa
1003c4cd:	50                   	push   eax
1003c4ce:	0f 4c f3             	cmovl  esi,ebx
1003c4d1:	8d 45 9c             	lea    eax,[ebp-0x64]
1003c4d4:	56                   	push   esi
1003c4d5:	50                   	push   eax
1003c4d6:	e8 25 04 fd ff       	call   0x1000c900
1003c4db:	8d 45 dc             	lea    eax,[ebp-0x24]
1003c4de:	50                   	push   eax
1003c4df:	8d 45 bc             	lea    eax,[ebp-0x44]
1003c4e2:	50                   	push   eax
1003c4e3:	8d 45 9c             	lea    eax,[ebp-0x64]
1003c4e6:	50                   	push   eax
1003c4e7:	8d 85 1c ff ff ff    	lea    eax,[ebp-0xe4]
1003c4ed:	68 5c 5b 14 10       	push   0x10145b5c
1003c4f2:	50                   	push   eax
1003c4f3:	e8 08 04 fd ff       	call   0x1000c900
1003c4f8:	8b 87 a4 03 00 00    	mov    eax,DWORD PTR [edi+0x3a4]
1003c4fe:	8d 95 1c ff ff ff    	lea    edx,[ebp-0xe4]
1003c504:	52                   	push   edx
1003c505:	50                   	push   eax
1003c506:	8b 08                	mov    ecx,DWORD PTR [eax]
1003c508:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003c50e:	83 c4 40             	add    esp,0x40
1003c511:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003c517:	d8 05 f0 cc 13 10    	fadd   DWORD PTR ds:0x1013ccf0
1003c51d:	d9 9f f4 03 00 00    	fstp   DWORD PTR [edi+0x3f4]
1003c523:	f6 05 1c a4 18 10 40 	test   BYTE PTR ds:0x1018a41c,0x40
1003c52a:	8b 8f 80 03 00 00    	mov    ecx,DWORD PTR [edi+0x380]
1003c530:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c532:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c535:	74 3f                	je     0x1003c576
1003c537:	ff d0                	call   eax
1003c539:	8b 8f 80 03 00 00    	mov    ecx,DWORD PTR [edi+0x380]
1003c53f:	8b 31                	mov    esi,DWORD PTR [ecx]
1003c541:	84 c0                	test   al,al
1003c543:	75 07                	jne    0x1003c54c
1003c545:	6a 01                	push   0x1
1003c547:	ff 56 24             	call   DWORD PTR [esi+0x24]
1003c54a:	eb 3d                	jmp    0x1003c589
1003c54c:	6a 05                	push   0x5
1003c54e:	6a 00                	push   0x0
1003c550:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003c556:	8b 8f 80 03 00 00    	mov    ecx,DWORD PTR [edi+0x380]
1003c55c:	83 c4 08             	add    esp,0x8
1003c55f:	05 c0 00 00 00       	add    eax,0xc0
1003c564:	50                   	push   eax
1003c565:	6a 78                	push   0x78
1003c567:	68 b1 00 00 00       	push   0xb1
1003c56c:	6a 21                	push   0x21
1003c56e:	ff 96 2c 01 00 00    	call   DWORD PTR [esi+0x12c]
1003c574:	eb 13                	jmp    0x1003c589
1003c576:	ff d0                	call   eax
1003c578:	84 c0                	test   al,al
1003c57a:	74 0d                	je     0x1003c589
1003c57c:	8b 8f 80 03 00 00    	mov    ecx,DWORD PTR [edi+0x380]
1003c582:	6a 00                	push   0x0
1003c584:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c586:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c589:	83 3d 44 f6 18 10 00 	cmp    DWORD PTR ds:0x1018f644,0x0
1003c590:	0f 84 c8 00 00 00    	je     0x1003c65e
1003c596:	8b 87 ac 03 00 00    	mov    eax,DWORD PTR [edi+0x3ac]
1003c59c:	68 08 b1 13 10       	push   0x1013b108
1003c5a1:	50                   	push   eax
1003c5a2:	8b 08                	mov    ecx,DWORD PTR [eax]
1003c5a4:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003c5aa:	8b 87 a8 03 00 00    	mov    eax,DWORD PTR [edi+0x3a8]
1003c5b0:	68 08 b1 13 10       	push   0x1013b108
1003c5b5:	50                   	push   eax
1003c5b6:	8b 08                	mov    ecx,DWORD PTR [eax]
1003c5b8:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003c5be:	8b 87 b0 03 00 00    	mov    eax,DWORD PTR [edi+0x3b0]
1003c5c4:	68 08 b1 13 10       	push   0x1013b108
1003c5c9:	50                   	push   eax
1003c5ca:	8b 08                	mov    ecx,DWORD PTR [eax]
1003c5cc:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003c5d2:	83 c4 18             	add    esp,0x18
1003c5d5:	c6 87 48 08 00 00 00 	mov    BYTE PTR [edi+0x848],0x0
1003c5dc:	c7 87 4c 08 00 00 ff 	mov    DWORD PTR [edi+0x84c],0xff
1003c5e3:	00 00 00 
1003c5e6:	c6 87 98 0e 00 00 00 	mov    BYTE PTR [edi+0xe98],0x0
1003c5ed:	c7 87 18 0f 00 00 00 	mov    DWORD PTR [edi+0xf18],0x0
1003c5f4:	00 00 00 
1003c5f7:	66 c7 87 1c 0f 00 00 	mov    WORD PTR [edi+0xf1c],0x0
1003c5fe:	00 00 
1003c600:	c7 87 20 0f 00 00 00 	mov    DWORD PTR [edi+0xf20],0x0
1003c607:	00 00 00 
1003c60a:	c7 87 24 0f 00 00 00 	mov    DWORD PTR [edi+0xf24],0x0
1003c611:	00 00 00 
1003c614:	c7 87 28 0f 00 00 00 	mov    DWORD PTR [edi+0xf28],0x0
1003c61b:	00 00 00 
1003c61e:	c7 87 40 0f 00 00 00 	mov    DWORD PTR [edi+0xf40],0x0
1003c625:	00 00 00 
1003c628:	c7 87 2c 0f 00 00 00 	mov    DWORD PTR [edi+0xf2c],0x0
1003c62f:	00 00 00 
1003c632:	c6 87 30 0f 00 00 00 	mov    BYTE PTR [edi+0xf30],0x0
1003c639:	c6 87 1e 0f 00 00 00 	mov    BYTE PTR [edi+0xf1e],0x0
1003c640:	c7 87 34 0f 00 00 00 	mov    DWORD PTR [edi+0xf34],0x0
1003c647:	00 00 00 
1003c64a:	c7 87 38 0f 00 00 00 	mov    DWORD PTR [edi+0xf38],0x0
1003c651:	00 00 00 
1003c654:	c7 87 3c 0f 00 00 00 	mov    DWORD PTR [edi+0xf3c],0x0
1003c65b:	00 00 00 
1003c65e:	ff 15 30 27 1b 10    	call   DWORD PTR ds:0x101b2730
1003c664:	85 c0                	test   eax,eax
1003c666:	0f 84 33 04 00 00    	je     0x1003ca9f
1003c66c:	68 8c 68 14 10       	push   0x1014688c
1003c671:	ff 15 30 27 1b 10    	call   DWORD PTR ds:0x101b2730
1003c677:	50                   	push   eax
1003c678:	e8 73 76 09 00       	call   0x100d3cf0
1003c67d:	83 c4 08             	add    esp,0x8
1003c680:	85 c0                	test   eax,eax
1003c682:	0f 84 17 04 00 00    	je     0x1003ca9f
1003c688:	8b 87 ec 03 00 00    	mov    eax,DWORD PTR [edi+0x3ec]
1003c68e:	3d ff 00 00 00       	cmp    eax,0xff
1003c693:	7d 09                	jge    0x1003c69e
1003c695:	83 c0 05             	add    eax,0x5
1003c698:	89 87 ec 03 00 00    	mov    DWORD PTR [edi+0x3ec],eax
1003c69e:	85 c0                	test   eax,eax
1003c6a0:	79 0c                	jns    0x1003c6ae
1003c6a2:	c7 87 ec 03 00 00 00 	mov    DWORD PTR [edi+0x3ec],0x0
1003c6a9:	00 00 00 
1003c6ac:	eb 11                	jmp    0x1003c6bf
1003c6ae:	3d ff 00 00 00       	cmp    eax,0xff
1003c6b3:	7e 0a                	jle    0x1003c6bf
1003c6b5:	c7 87 ec 03 00 00 ff 	mov    DWORD PTR [edi+0x3ec],0xff
1003c6bc:	00 00 00 
1003c6bf:	8b 8f e0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3e0]
1003c6c5:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c6c7:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c6ca:	ff d0                	call   eax
1003c6cc:	84 c0                	test   al,al
1003c6ce:	75 0d                	jne    0x1003c6dd
1003c6d0:	8b 8f e0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3e0]
1003c6d6:	6a 01                	push   0x1
1003c6d8:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c6da:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c6dd:	ff b7 ec 03 00 00    	push   DWORD PTR [edi+0x3ec]
1003c6e3:	8b 8f e0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3e0]
1003c6e9:	6a 00                	push   0x0
1003c6eb:	6a 00                	push   0x0
1003c6ed:	68 ff 00 00 00       	push   0xff
1003c6f2:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c6f4:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c6fa:	8d b7 b4 03 00 00    	lea    esi,[edi+0x3b4]
1003c700:	bb 05 00 00 00       	mov    ebx,0x5
1003c705:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c707:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c709:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c70c:	ff d0                	call   eax
1003c70e:	84 c0                	test   al,al
1003c710:	75 09                	jne    0x1003c71b
1003c712:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c714:	6a 01                	push   0x1
1003c716:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c718:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c71b:	83 c6 04             	add    esi,0x4
1003c71e:	83 eb 01             	sub    ebx,0x1
1003c721:	75 e2                	jne    0x1003c705
1003c723:	b8 9c d3 18 10       	mov    eax,0x1018d39c
1003c728:	89 9d 94 fd ff ff    	mov    DWORD PTR [ebp-0x26c],ebx
1003c72e:	2b c7                	sub    eax,edi
1003c730:	8d b7 d0 03 00 00    	lea    esi,[edi+0x3d0]
1003c736:	89 85 7c fd ff ff    	mov    DWORD PTR [ebp-0x284],eax
1003c73c:	bb c4 6c 55 10       	mov    ebx,0x10556cc4
1003c741:	b8 9c d2 18 10       	mov    eax,0x1018d29c
1003c746:	2b c7                	sub    eax,edi
1003c748:	89 85 98 fd ff ff    	mov    DWORD PTR [ebp-0x268],eax
1003c74e:	66 90                	xchg   ax,ax
1003c750:	8b 0b                	mov    ecx,DWORD PTR [ebx]
1003c752:	85 c9                	test   ecx,ecx
1003c754:	0f 84 2d 02 00 00    	je     0x1003c987
1003c75a:	8d 51 01             	lea    edx,[ecx+0x1]
1003c75d:	0f 1f 00             	nop    DWORD PTR [eax]
1003c760:	8a 01                	mov    al,BYTE PTR [ecx]
1003c762:	41                   	inc    ecx
1003c763:	84 c0                	test   al,al
1003c765:	75 f9                	jne    0x1003c760
1003c767:	2b ca                	sub    ecx,edx
1003c769:	83 f9 01             	cmp    ecx,0x1
1003c76c:	0f 82 15 02 00 00    	jb     0x1003c987
1003c772:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c774:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c776:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c779:	ff d0                	call   eax
1003c77b:	84 c0                	test   al,al
1003c77d:	75 09                	jne    0x1003c788
1003c77f:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c781:	6a 01                	push   0x1
1003c783:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c785:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c788:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003c78e:	8b 8e a8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xba8]
1003c794:	8b 95 7c fd ff ff    	mov    edx,DWORD PTR [ebp-0x284]
1003c79a:	d9 9d 80 fd ff ff    	fstp   DWORD PTR [ebp-0x280]
1003c7a0:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c7a2:	f3 0f 10 04 32       	movss  xmm0,DWORD PTR [edx+esi*1]
1003c7a7:	0f 2f 85 80 fd ff ff 	comiss xmm0,DWORD PTR [ebp-0x280]
1003c7ae:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c7b1:	76 0a                	jbe    0x1003c7bd
1003c7b3:	ff d0                	call   eax
1003c7b5:	84 c0                	test   al,al
1003c7b7:	75 17                	jne    0x1003c7d0
1003c7b9:	6a 01                	push   0x1
1003c7bb:	eb 08                	jmp    0x1003c7c5
1003c7bd:	ff d0                	call   eax
1003c7bf:	84 c0                	test   al,al
1003c7c1:	74 0d                	je     0x1003c7d0
1003c7c3:	6a 00                	push   0x0
1003c7c5:	8b 8e a8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xba8]
1003c7cb:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c7cd:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c7d0:	8b 8e c8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xbc8]
1003c7d6:	8b 95 94 fd ff ff    	mov    edx,DWORD PTR [ebp-0x26c]
1003c7dc:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c7de:	80 ba 74 d9 18 10 00 	cmp    BYTE PTR [edx+0x1018d974],0x0
1003c7e5:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c7e8:	74 0a                	je     0x1003c7f4
1003c7ea:	ff d0                	call   eax
1003c7ec:	84 c0                	test   al,al
1003c7ee:	75 17                	jne    0x1003c807
1003c7f0:	6a 01                	push   0x1
1003c7f2:	eb 08                	jmp    0x1003c7fc
1003c7f4:	ff d0                	call   eax
1003c7f6:	84 c0                	test   al,al
1003c7f8:	74 0d                	je     0x1003c807
1003c7fa:	6a 00                	push   0x0
1003c7fc:	8b 8e c8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xbc8]
1003c802:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c804:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c807:	0f bf 43 04          	movsx  eax,WORD PTR [ebx+0x4]
1003c80b:	50                   	push   eax
1003c80c:	8b 85 98 fd ff ff    	mov    eax,DWORD PTR [ebp-0x268]
1003c812:	ff 34 30             	push   DWORD PTR [eax+esi*1]
1003c815:	8d 85 1c ff ff ff    	lea    eax,[ebp-0xe4]
1003c81b:	ff 33                	push   DWORD PTR [ebx]
1003c81d:	68 94 68 14 10       	push   0x10146894
1003c822:	50                   	push   eax
1003c823:	e8 d8 00 fd ff       	call   0x1000c900
1003c828:	8b 8f 90 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe90]
1003c82e:	8d 95 90 fd ff ff    	lea    edx,[ebp-0x270]
1003c834:	83 c4 14             	add    esp,0x14
1003c837:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c839:	52                   	push   edx
1003c83a:	8d 95 84 fd ff ff    	lea    edx,[ebp-0x27c]
1003c840:	52                   	push   edx
1003c841:	8d 95 1c ff ff ff    	lea    edx,[ebp-0xe4]
1003c847:	52                   	push   edx
1003c848:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003c84b:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c84d:	8d 95 64 fd ff ff    	lea    edx,[ebp-0x29c]
1003c853:	52                   	push   edx
1003c854:	8d 95 60 fd ff ff    	lea    edx,[ebp-0x2a0]
1003c85a:	52                   	push   edx
1003c85b:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c85d:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003c860:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c862:	8d 95 8c fd ff ff    	lea    edx,[ebp-0x274]
1003c868:	52                   	push   edx
1003c869:	8d 95 88 fd ff ff    	lea    edx,[ebp-0x278]
1003c86f:	52                   	push   edx
1003c870:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c872:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003c875:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c877:	ff b5 90 fd ff ff    	push   DWORD PTR [ebp-0x270]
1003c87d:	ff b5 84 fd ff ff    	push   DWORD PTR [ebp-0x27c]
1003c883:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c885:	ff 50 08             	call   DWORD PTR [eax+0x8]
1003c888:	66 0f 6e 05 34 f4 18 	movd   xmm0,DWORD PTR ds:0x1018f434
1003c88f:	10 
1003c890:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1003c894:	8b 85 90 fd ff ff    	mov    eax,DWORD PTR [ebp-0x270]
1003c89a:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c89c:	0f af 85 94 fd ff ff 	imul   eax,DWORD PTR [ebp-0x26c]
1003c8a3:	f2 0f 5e 05 d0 ee 13 	divsd  xmm0,QWORD PTR ds:0x1013eed0
1003c8aa:	10 
1003c8ab:	8b 11                	mov    edx,DWORD PTR [ecx]
1003c8ad:	66 0f 6e c8          	movd   xmm1,eax
1003c8b1:	f3 0f e6 c9          	cvtdq2pd xmm1,xmm1
1003c8b5:	f2 0f 58 c8          	addsd  xmm1,xmm0
1003c8b9:	f2 0f 2c c1          	cvttsd2si eax,xmm1
1003c8bd:	50                   	push   eax
1003c8be:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003c8c3:	2b 85 84 fd ff ff    	sub    eax,DWORD PTR [ebp-0x27c]
1003c8c9:	83 e8 05             	sub    eax,0x5
1003c8cc:	50                   	push   eax
1003c8cd:	ff 12                	call   DWORD PTR [edx]
1003c8cf:	8b 06                	mov    eax,DWORD PTR [esi]
1003c8d1:	8d 95 1c ff ff ff    	lea    edx,[ebp-0xe4]
1003c8d7:	52                   	push   edx
1003c8d8:	50                   	push   eax
1003c8d9:	8b 08                	mov    ecx,DWORD PTR [eax]
1003c8db:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003c8e1:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c8e3:	8d 95 8c fd ff ff    	lea    edx,[ebp-0x274]
1003c8e9:	83 c4 08             	add    esp,0x8
1003c8ec:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c8ee:	52                   	push   edx
1003c8ef:	8d 95 88 fd ff ff    	lea    edx,[ebp-0x278]
1003c8f5:	52                   	push   edx
1003c8f6:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003c8f9:	8b 85 8c fd ff ff    	mov    eax,DWORD PTR [ebp-0x274]
1003c8ff:	8b 8e a8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xba8]
1003c905:	83 c0 04             	add    eax,0x4
1003c908:	50                   	push   eax
1003c909:	8b 85 88 fd ff ff    	mov    eax,DWORD PTR [ebp-0x278]
1003c90f:	83 c0 e4             	add    eax,0xffffffe4
1003c912:	8b 11                	mov    edx,DWORD PTR [ecx]
1003c914:	50                   	push   eax
1003c915:	ff 12                	call   DWORD PTR [edx]
1003c917:	8b 8e c8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xbc8]
1003c91d:	8b 85 8c fd ff ff    	mov    eax,DWORD PTR [ebp-0x274]
1003c923:	8b 11                	mov    edx,DWORD PTR [ecx]
1003c925:	83 c0 04             	add    eax,0x4
1003c928:	50                   	push   eax
1003c929:	8b 85 88 fd ff ff    	mov    eax,DWORD PTR [ebp-0x278]
1003c92f:	83 c0 f2             	add    eax,0xfffffff2
1003c932:	50                   	push   eax
1003c933:	ff 12                	call   DWORD PTR [edx]
1003c935:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c937:	8b 96 0c ff ff ff    	mov    edx,DWORD PTR [esi-0xf4]
1003c93d:	6a 00                	push   0x0
1003c93f:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c941:	83 fa 01             	cmp    edx,0x1
1003c944:	75 11                	jne    0x1003c957
1003c946:	6a 00                	push   0x0
1003c948:	6a 00                	push   0x0
1003c94a:	6a 75                	push   0x75
1003c94c:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c952:	e9 82 00 00 00       	jmp    0x1003c9d9
1003c957:	83 fa 02             	cmp    edx,0x2
1003c95a:	75 14                	jne    0x1003c970
1003c95c:	6a 51                	push   0x51
1003c95e:	68 d3 00 00 00       	push   0xd3
1003c963:	68 ff 00 00 00       	push   0xff
1003c968:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c96e:	eb 69                	jmp    0x1003c9d9
1003c970:	68 ff 00 00 00       	push   0xff
1003c975:	68 ff 00 00 00       	push   0xff
1003c97a:	68 ff 00 00 00       	push   0xff
1003c97f:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003c985:	eb 52                	jmp    0x1003c9d9
1003c987:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c989:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c98b:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c98e:	ff d0                	call   eax
1003c990:	84 c0                	test   al,al
1003c992:	74 09                	je     0x1003c99d
1003c994:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003c996:	6a 00                	push   0x0
1003c998:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c99a:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c99d:	8b 8e a8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xba8]
1003c9a3:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c9a5:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c9a8:	ff d0                	call   eax
1003c9aa:	84 c0                	test   al,al
1003c9ac:	74 0d                	je     0x1003c9bb
1003c9ae:	8b 8e a8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xba8]
1003c9b4:	6a 00                	push   0x0
1003c9b6:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c9b8:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c9bb:	8b 8e c8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xbc8]
1003c9c1:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c9c3:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003c9c6:	ff d0                	call   eax
1003c9c8:	84 c0                	test   al,al
1003c9ca:	74 0d                	je     0x1003c9d9
1003c9cc:	8b 8e c8 0b 00 00    	mov    ecx,DWORD PTR [esi+0xbc8]
1003c9d2:	6a 00                	push   0x0
1003c9d4:	8b 01                	mov    eax,DWORD PTR [ecx]
1003c9d6:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003c9d9:	ff 85 94 fd ff ff    	inc    DWORD PTR [ebp-0x26c]
1003c9df:	83 c3 14             	add    ebx,0x14
1003c9e2:	83 c6 04             	add    esi,0x4
1003c9e5:	81 fb 14 6d 55 10    	cmp    ebx,0x10556d14
1003c9eb:	0f 8c 5f fd ff ff    	jl     0x1003c750
1003c9f1:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003c9f7:	8b 8f cc 03 00 00    	mov    ecx,DWORD PTR [edi+0x3cc]
1003c9fd:	f3 0f 10 87 e4 03 00 	movss  xmm0,DWORD PTR [edi+0x3e4]
1003ca04:	00 
1003ca05:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003ca0b:	0f 2f 85 98 fd ff ff 	comiss xmm0,DWORD PTR [ebp-0x268]
1003ca12:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ca14:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003ca17:	76 0a                	jbe    0x1003ca23
1003ca19:	ff d0                	call   eax
1003ca1b:	84 c0                	test   al,al
1003ca1d:	75 17                	jne    0x1003ca36
1003ca1f:	6a 01                	push   0x1
1003ca21:	eb 08                	jmp    0x1003ca2b
1003ca23:	ff d0                	call   eax
1003ca25:	84 c0                	test   al,al
1003ca27:	74 0d                	je     0x1003ca36
1003ca29:	6a 00                	push   0x0
1003ca2b:	8b 8f cc 03 00 00    	mov    ecx,DWORD PTR [edi+0x3cc]
1003ca31:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ca33:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003ca36:	f3 0f 10 0d d4 2b 1b 	movss  xmm1,DWORD PTR ds:0x101b2bd4
1003ca3d:	10 
1003ca3e:	0f 57 c0             	xorps  xmm0,xmm0
1003ca41:	0f 2e c8             	ucomiss xmm1,xmm0
1003ca44:	9f                   	lahf
1003ca45:	f6 c4 44             	test   ah,0x44
1003ca48:	0f 8b 31 01 00 00    	jnp    0x1003cb7f
1003ca4e:	f3 0f 10 05 00 ef 13 	movss  xmm0,DWORD PTR ds:0x1013ef00
1003ca55:	10 
1003ca56:	0f 2f c1             	comiss xmm0,xmm1
1003ca59:	0f 82 20 01 00 00    	jb     0x1003cb7f
1003ca5f:	f3 0f 2c c1          	cvttss2si eax,xmm1
1003ca63:	8d 04 80             	lea    eax,[eax+eax*4]
1003ca66:	8b 34 85 b0 6c 55 10 	mov    esi,DWORD PTR [eax*4+0x10556cb0]
1003ca6d:	85 f6                	test   esi,esi
1003ca6f:	0f 84 0a 01 00 00    	je     0x1003cb7f
1003ca75:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003ca7b:	dc 05 48 ee 13 10    	fadd   QWORD PTR ds:0x1013ee48
1003ca81:	8b 87 cc 03 00 00    	mov    eax,DWORD PTR [edi+0x3cc]
1003ca87:	56                   	push   esi
1003ca88:	50                   	push   eax
1003ca89:	d9 9f e4 03 00 00    	fstp   DWORD PTR [edi+0x3e4]
1003ca8f:	8b 08                	mov    ecx,DWORD PTR [eax]
1003ca91:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003ca97:	83 c4 08             	add    esp,0x8
1003ca9a:	e9 e0 00 00 00       	jmp    0x1003cb7f
1003ca9f:	8d b7 78 0f 00 00    	lea    esi,[edi+0xf78]
1003caa5:	bb 04 00 00 00       	mov    ebx,0x4
1003caaa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1003cab0:	8b 8e 58 f4 ff ff    	mov    ecx,DWORD PTR [esi-0xba8]
1003cab6:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cab8:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003cabb:	ff d0                	call   eax
1003cabd:	84 c0                	test   al,al
1003cabf:	74 0d                	je     0x1003cace
1003cac1:	8b 8e 58 f4 ff ff    	mov    ecx,DWORD PTR [esi-0xba8]
1003cac7:	6a 00                	push   0x0
1003cac9:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cacb:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003cace:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003cad0:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cad2:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003cad5:	ff d0                	call   eax
1003cad7:	84 c0                	test   al,al
1003cad9:	74 09                	je     0x1003cae4
1003cadb:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003cadd:	6a 00                	push   0x0
1003cadf:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cae1:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003cae4:	8b 4e 20             	mov    ecx,DWORD PTR [esi+0x20]
1003cae7:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cae9:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003caec:	ff d0                	call   eax
1003caee:	84 c0                	test   al,al
1003caf0:	74 0a                	je     0x1003cafc
1003caf2:	8b 4e 20             	mov    ecx,DWORD PTR [esi+0x20]
1003caf5:	6a 00                	push   0x0
1003caf7:	8b 01                	mov    eax,DWORD PTR [ecx]
1003caf9:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003cafc:	83 c6 04             	add    esi,0x4
1003caff:	83 eb 01             	sub    ebx,0x1
1003cb02:	75 ac                	jne    0x1003cab0
1003cb04:	8d b7 b4 03 00 00    	lea    esi,[edi+0x3b4]
1003cb0a:	bb 05 00 00 00       	mov    ebx,0x5
1003cb0f:	90                   	nop
1003cb10:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003cb12:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cb14:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003cb17:	ff d0                	call   eax
1003cb19:	84 c0                	test   al,al
1003cb1b:	74 09                	je     0x1003cb26
1003cb1d:	8b 0e                	mov    ecx,DWORD PTR [esi]
1003cb1f:	6a 00                	push   0x0
1003cb21:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cb23:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003cb26:	83 c6 04             	add    esi,0x4
1003cb29:	83 eb 01             	sub    ebx,0x1
1003cb2c:	75 e2                	jne    0x1003cb10
1003cb2e:	8b 8f cc 03 00 00    	mov    ecx,DWORD PTR [edi+0x3cc]
1003cb34:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cb36:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003cb39:	ff d0                	call   eax
1003cb3b:	84 c0                	test   al,al
1003cb3d:	74 0c                	je     0x1003cb4b
1003cb3f:	8b 8f cc 03 00 00    	mov    ecx,DWORD PTR [edi+0x3cc]
1003cb45:	53                   	push   ebx
1003cb46:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cb48:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003cb4b:	8b 8f e0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3e0]
1003cb51:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cb53:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003cb56:	ff d0                	call   eax
1003cb58:	84 c0                	test   al,al
1003cb5a:	74 0d                	je     0x1003cb69
1003cb5c:	8b 8f e0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3e0]
1003cb62:	6a 00                	push   0x0
1003cb64:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cb66:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003cb69:	81 bf ec 03 00 00 ff 	cmp    DWORD PTR [edi+0x3ec],0xff
1003cb70:	00 00 00 
1003cb73:	7d 0a                	jge    0x1003cb7f
1003cb75:	c7 87 ec 03 00 00 ff 	mov    DWORD PTR [edi+0x3ec],0xff
1003cb7c:	00 00 00 
1003cb7f:	8b 8f e8 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfe8]
1003cb85:	8d 95 78 fd ff ff    	lea    edx,[ebp-0x288]
1003cb8b:	52                   	push   edx
1003cb8c:	8d 95 74 fd ff ff    	lea    edx,[ebp-0x28c]
1003cb92:	52                   	push   edx
1003cb93:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cb95:	8d 95 70 fd ff ff    	lea    edx,[ebp-0x290]
1003cb9b:	52                   	push   edx
1003cb9c:	8d 95 6c fd ff ff    	lea    edx,[ebp-0x294]
1003cba2:	52                   	push   edx
1003cba3:	ff 90 40 01 00 00    	call   DWORD PTR [eax+0x140]
1003cba9:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003cbaf:	f3 0f 10 87 e4 0f 00 	movss  xmm0,DWORD PTR [edi+0xfe4]
1003cbb6:	00 
1003cbb7:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003cbbd:	0f 2f 85 98 fd ff ff 	comiss xmm0,DWORD PTR [ebp-0x268]
1003cbc4:	76 1e                	jbe    0x1003cbe4
1003cbc6:	8b 8f e8 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfe8]
1003cbcc:	68 80 00 00 00       	push   0x80
1003cbd1:	6a 00                	push   0x0
1003cbd3:	6a 00                	push   0x0
1003cbd5:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cbd7:	68 ff 00 00 00       	push   0xff
1003cbdc:	ff 90 2c 01 00 00    	call   DWORD PTR [eax+0x12c]
1003cbe2:	eb 75                	jmp    0x1003cc59
1003cbe4:	8b 95 78 fd ff ff    	mov    edx,DWORD PTR [ebp-0x288]
1003cbea:	81 fa ff 00 00 00    	cmp    edx,0xff
1003cbf0:	7d 36                	jge    0x1003cc28
1003cbf2:	8b 8f e8 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfe8]
1003cbf8:	83 c2 0f             	add    edx,0xf
1003cbfb:	52                   	push   edx
1003cbfc:	ff b5 74 fd ff ff    	push   DWORD PTR [ebp-0x28c]
1003cc02:	89 95 78 fd ff ff    	mov    DWORD PTR [ebp-0x288],edx
1003cc08:	ff b5 70 fd ff ff    	push   DWORD PTR [ebp-0x290]
1003cc0e:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cc10:	ff b5 6c fd ff ff    	push   DWORD PTR [ebp-0x294]
1003cc16:	ff 90 2c 01 00 00    	call   DWORD PTR [eax+0x12c]
1003cc1c:	8b 95 78 fd ff ff    	mov    edx,DWORD PTR [ebp-0x288]
1003cc22:	81 fa ff 00 00 00    	cmp    edx,0xff
1003cc28:	7e 2f                	jle    0x1003cc59
1003cc2a:	8b 8f e8 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfe8]
1003cc30:	68 ff 00 00 00       	push   0xff
1003cc35:	ff b5 74 fd ff ff    	push   DWORD PTR [ebp-0x28c]
1003cc3b:	c7 85 78 fd ff ff ff 	mov    DWORD PTR [ebp-0x288],0xff
1003cc42:	00 00 00 
1003cc45:	ff b5 70 fd ff ff    	push   DWORD PTR [ebp-0x290]
1003cc4b:	8b 11                	mov    edx,DWORD PTR [ecx]
1003cc4d:	ff b5 6c fd ff ff    	push   DWORD PTR [ebp-0x294]
1003cc53:	ff 92 2c 01 00 00    	call   DWORD PTR [edx+0x12c]
1003cc59:	b8 89 88 88 88       	mov    eax,0x88888889
1003cc5e:	f7 2d d0 2b 1b 10    	imul   DWORD PTR ds:0x101b2bd0
1003cc64:	b8 01 00 00 00       	mov    eax,0x1
1003cc69:	03 15 d0 2b 1b 10    	add    edx,DWORD PTR ds:0x101b2bd0
1003cc6f:	c1 fa 03             	sar    edx,0x3
1003cc72:	8b f2                	mov    esi,edx
1003cc74:	c1 ee 1f             	shr    esi,0x1f
1003cc77:	03 f2                	add    esi,edx
1003cc79:	85 f6                	test   esi,esi
1003cc7b:	0f 4e f0             	cmovle esi,eax
1003cc7e:	83 3d 64 ed 18 10 00 	cmp    DWORD PTR ds:0x1018ed64,0x0
1003cc85:	0f 84 84 00 00 00    	je     0x1003cd0f
1003cc8b:	80 3d dc 2b 1b 10 00 	cmp    BYTE PTR ds:0x101b2bdc,0x0
1003cc92:	0f 94 c0             	sete   al
1003cc95:	a2 dc 2b 1b 10       	mov    ds:0x101b2bdc,al
1003cc9a:	84 c0                	test   al,al
1003cc9c:	0f 84 18 01 00 00    	je     0x1003cdba
1003cca2:	8b 8f 78 03 00 00    	mov    ecx,DWORD PTR [edi+0x378]
1003cca8:	8d 95 90 fd ff ff    	lea    edx,[ebp-0x270]
1003ccae:	52                   	push   edx
1003ccaf:	8d 95 98 fd ff ff    	lea    edx,[ebp-0x268]
1003ccb5:	52                   	push   edx
1003ccb6:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ccb8:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003ccbb:	8b 8f 7c 03 00 00    	mov    ecx,DWORD PTR [edi+0x37c]
1003ccc1:	8d 95 94 fd ff ff    	lea    edx,[ebp-0x26c]
1003ccc7:	52                   	push   edx
1003ccc8:	8d 95 80 fd ff ff    	lea    edx,[ebp-0x280]
1003ccce:	52                   	push   edx
1003cccf:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ccd1:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003ccd4:	8b 95 90 fd ff ff    	mov    edx,DWORD PTR [ebp-0x270]
1003ccda:	85 d2                	test   edx,edx
1003ccdc:	79 02                	jns    0x1003cce0
1003ccde:	03 d6                	add    edx,esi
1003cce0:	8b 0d 34 f4 18 10    	mov    ecx,DWORD PTR ds:0x1018f434
1003cce6:	33 c0                	xor    eax,eax
1003cce8:	85 d2                	test   edx,edx
1003ccea:	0f 4f d0             	cmovg  edx,eax
1003cced:	2b 0d d0 2b 1b 10    	sub    ecx,DWORD PTR ds:0x101b2bd0
1003ccf3:	8b 85 94 fd ff ff    	mov    eax,DWORD PTR [ebp-0x26c]
1003ccf9:	89 95 90 fd ff ff    	mov    DWORD PTR [ebp-0x270],edx
1003ccff:	3b c1                	cmp    eax,ecx
1003cd01:	7e 04                	jle    0x1003cd07
1003cd03:	2b c6                	sub    eax,esi
1003cd05:	3b c1                	cmp    eax,ecx
1003cd07:	0f 4c c1             	cmovl  eax,ecx
1003cd0a:	e9 7e 00 00 00       	jmp    0x1003cd8d
1003cd0f:	80 3d dc 2b 1b 10 00 	cmp    BYTE PTR ds:0x101b2bdc,0x0
1003cd16:	0f 94 c0             	sete   al
1003cd19:	a2 dc 2b 1b 10       	mov    ds:0x101b2bdc,al
1003cd1e:	84 c0                	test   al,al
1003cd20:	0f 84 94 00 00 00    	je     0x1003cdba
1003cd26:	8b 8f 78 03 00 00    	mov    ecx,DWORD PTR [edi+0x378]
1003cd2c:	8d 95 90 fd ff ff    	lea    edx,[ebp-0x270]
1003cd32:	52                   	push   edx
1003cd33:	8d 95 98 fd ff ff    	lea    edx,[ebp-0x268]
1003cd39:	52                   	push   edx
1003cd3a:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cd3c:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003cd3f:	8b 8f 7c 03 00 00    	mov    ecx,DWORD PTR [edi+0x37c]
1003cd45:	8d 95 94 fd ff ff    	lea    edx,[ebp-0x26c]
1003cd4b:	52                   	push   edx
1003cd4c:	8d 95 80 fd ff ff    	lea    edx,[ebp-0x280]
1003cd52:	52                   	push   edx
1003cd53:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cd55:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003cd58:	a1 d0 2b 1b 10       	mov    eax,ds:0x101b2bd0
1003cd5d:	8b 95 90 fd ff ff    	mov    edx,DWORD PTR [ebp-0x270]
1003cd63:	f7 d8                	neg    eax
1003cd65:	3b d0                	cmp    edx,eax
1003cd67:	7e 04                	jle    0x1003cd6d
1003cd69:	2b d6                	sub    edx,esi
1003cd6b:	3b d0                	cmp    edx,eax
1003cd6d:	8b 0d 34 f4 18 10    	mov    ecx,DWORD PTR ds:0x1018f434
1003cd73:	0f 4c d0             	cmovl  edx,eax
1003cd76:	8b 85 94 fd ff ff    	mov    eax,DWORD PTR [ebp-0x26c]
1003cd7c:	89 95 90 fd ff ff    	mov    DWORD PTR [ebp-0x270],edx
1003cd82:	3b c1                	cmp    eax,ecx
1003cd84:	7d 04                	jge    0x1003cd8a
1003cd86:	03 c6                	add    eax,esi
1003cd88:	3b c1                	cmp    eax,ecx
1003cd8a:	0f 4f c1             	cmovg  eax,ecx
1003cd8d:	8b 8f 78 03 00 00    	mov    ecx,DWORD PTR [edi+0x378]
1003cd93:	89 85 94 fd ff ff    	mov    DWORD PTR [ebp-0x26c],eax
1003cd99:	52                   	push   edx
1003cd9a:	ff b5 98 fd ff ff    	push   DWORD PTR [ebp-0x268]
1003cda0:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cda2:	ff 10                	call   DWORD PTR [eax]
1003cda4:	8b 8f 7c 03 00 00    	mov    ecx,DWORD PTR [edi+0x37c]
1003cdaa:	ff b5 94 fd ff ff    	push   DWORD PTR [ebp-0x26c]
1003cdb0:	ff b5 80 fd ff ff    	push   DWORD PTR [ebp-0x280]
1003cdb6:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cdb8:	ff 10                	call   DWORD PTR [eax]
1003cdba:	8b cf                	mov    ecx,edi
1003cdbc:	e8 4f bc ff ff       	call   0x10038a10
1003cdc1:	8b cf                	mov    ecx,edi
1003cdc3:	e8 48 c4 ff ff       	call   0x10039210
1003cdc8:	83 3d b8 2b 54 10 00 	cmp    DWORD PTR ds:0x10542bb8,0x0
1003cdcf:	74 6c                	je     0x1003ce3d
1003cdd1:	8b 8f d8 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfd8]
1003cdd7:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cdd9:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003cddc:	ff d0                	call   eax
1003cdde:	84 c0                	test   al,al
1003cde0:	74 0d                	je     0x1003cdef
1003cde2:	8b 8f d8 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfd8]
1003cde8:	6a 00                	push   0x0
1003cdea:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cdec:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003cdef:	83 3d b8 2b 54 10 00 	cmp    DWORD PTR ds:0x10542bb8,0x0
1003cdf6:	74 45                	je     0x1003ce3d
1003cdf8:	8b 8f dc 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfdc]
1003cdfe:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ce00:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003ce03:	ff d0                	call   eax
1003ce05:	84 c0                	test   al,al
1003ce07:	74 0d                	je     0x1003ce16
1003ce09:	8b 8f dc 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfdc]
1003ce0f:	6a 00                	push   0x0
1003ce11:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ce13:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003ce16:	83 3d b8 2b 54 10 00 	cmp    DWORD PTR ds:0x10542bb8,0x0
1003ce1d:	74 1e                	je     0x1003ce3d
1003ce1f:	8b 8f e0 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfe0]
1003ce25:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ce27:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003ce2a:	ff d0                	call   eax
1003ce2c:	84 c0                	test   al,al
1003ce2e:	74 0d                	je     0x1003ce3d
1003ce30:	8b 8f e0 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfe0]
1003ce36:	6a 00                	push   0x0
1003ce38:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ce3a:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003ce3d:	f3 0f 10 87 c4 0f 00 	movss  xmm0,DWORD PTR [edi+0xfc4]
1003ce44:	00 
1003ce45:	f3 0f 11 85 80 fd ff 	movss  DWORD PTR [ebp-0x280],xmm0
1003ce4c:	ff 
1003ce4d:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003ce53:	f3 0f 10 8d 80 fd ff 	movss  xmm1,DWORD PTR [ebp-0x280]
1003ce5a:	ff 
1003ce5b:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003ce61:	f3 0f 10 85 98 fd ff 	movss  xmm0,DWORD PTR [ebp-0x268]
1003ce68:	ff 
1003ce69:	0f 2f c1             	comiss xmm0,xmm1
1003ce6c:	0f 82 2a 01 00 00    	jb     0x1003cf9c
1003ce72:	f3 0f 10 87 c0 0f 00 	movss  xmm0,DWORD PTR [edi+0xfc0]
1003ce79:	00 
1003ce7a:	f3 0f 58 c1          	addss  xmm0,xmm1
1003ce7e:	f3 0f 11 85 98 fd ff 	movss  DWORD PTR [ebp-0x268],xmm0
1003ce85:	ff 
1003ce86:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003ce8c:	f3 0f 10 85 98 fd ff 	movss  xmm0,DWORD PTR [ebp-0x268]
1003ce93:	ff 
1003ce94:	d9 9d 80 fd ff ff    	fstp   DWORD PTR [ebp-0x280]
1003ce9a:	0f 2f 85 80 fd ff ff 	comiss xmm0,DWORD PTR [ebp-0x280]
1003cea1:	0f 86 f5 00 00 00    	jbe    0x1003cf9c
1003cea7:	f3 0f 10 87 c4 0f 00 	movss  xmm0,DWORD PTR [edi+0xfc4]
1003ceae:	00 
1003ceaf:	f3 0f 11 85 94 fd ff 	movss  DWORD PTR [ebp-0x26c],xmm0
1003ceb6:	ff 
1003ceb7:	f3 0f 11 85 98 fd ff 	movss  DWORD PTR [ebp-0x268],xmm0
1003cebe:	ff 
1003cebf:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003cec5:	d8 a5 98 fd ff ff    	fsub   DWORD PTR [ebp-0x268]
1003cecb:	f3 0f 10 8f c0 0f 00 	movss  xmm1,DWORD PTR [edi+0xfc0]
1003ced2:	00 
1003ced3:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003ced9:	f3 0f 10 85 98 fd ff 	movss  xmm0,DWORD PTR [ebp-0x268]
1003cee0:	ff 
1003cee1:	f3 0f 5e c1          	divss  xmm0,xmm1
1003cee5:	f3 0f 11 8d 90 fd ff 	movss  DWORD PTR [ebp-0x270],xmm1
1003ceec:	ff 
1003ceed:	0f 2f 05 f0 cc 13 10 	comiss xmm0,DWORD PTR ds:0x1013ccf0
1003cef4:	f3 0f 11 85 80 fd ff 	movss  DWORD PTR [ebp-0x280],xmm0
1003cefb:	ff 
1003cefc:	76 2d                	jbe    0x1003cf2b
1003cefe:	f3 0f 2c 87 bc 0f 00 	cvttss2si eax,DWORD PTR [edi+0xfbc]
1003cf05:	00 
1003cf06:	a3 e0 d1 18 10       	mov    ds:0x1018d1e0,eax
1003cf0b:	f3 0f 10 87 c4 0f 00 	movss  xmm0,DWORD PTR [edi+0xfc4]
1003cf12:	00 
1003cf13:	f3 0f 10 8f c0 0f 00 	movss  xmm1,DWORD PTR [edi+0xfc0]
1003cf1a:	00 
1003cf1b:	f3 0f 11 85 94 fd ff 	movss  DWORD PTR [ebp-0x26c],xmm0
1003cf22:	ff 
1003cf23:	f3 0f 11 8d 90 fd ff 	movss  DWORD PTR [ebp-0x270],xmm1
1003cf2a:	ff 
1003cf2b:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003cf31:	f3 0f 10 8d 90 fd ff 	movss  xmm1,DWORD PTR [ebp-0x270]
1003cf38:	ff 
1003cf39:	f3 0f 58 8d 94 fd ff 	addss  xmm1,DWORD PTR [ebp-0x26c]
1003cf40:	ff 
1003cf41:	f3 0f 10 97 bc 0f 00 	movss  xmm2,DWORD PTR [edi+0xfbc]
1003cf48:	00 
1003cf49:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003cf4f:	f3 0f 10 85 98 fd ff 	movss  xmm0,DWORD PTR [ebp-0x268]
1003cf56:	ff 
1003cf57:	0f 2f c1             	comiss xmm0,xmm1
1003cf5a:	76 06                	jbe    0x1003cf62
1003cf5c:	f3 0f 2c ca          	cvttss2si ecx,xmm2
1003cf60:	eb 17                	jmp    0x1003cf79
1003cf62:	f3 0f 10 85 80 fd ff 	movss  xmm0,DWORD PTR [ebp-0x280]
1003cf69:	ff 
1003cf6a:	b9 5a 00 00 00       	mov    ecx,0x5a
1003cf6f:	f3 0f 59 c2          	mulss  xmm0,xmm2
1003cf73:	f3 0f 2c c0          	cvttss2si eax,xmm0
1003cf77:	2b c8                	sub    ecx,eax
1003cf79:	66 0f 6e c1          	movd   xmm0,ecx
1003cf7d:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1003cf80:	89 0d e0 d1 18 10    	mov    DWORD PTR ds:0x1018d1e0,ecx
1003cf86:	f3 0f 10 8f bc 0f 00 	movss  xmm1,DWORD PTR [edi+0xfbc]
1003cf8d:	00 
1003cf8e:	0f 2f c1             	comiss xmm0,xmm1
1003cf91:	76 09                	jbe    0x1003cf9c
1003cf93:	f3 0f 2c c1          	cvttss2si eax,xmm1
1003cf97:	a3 e0 d1 18 10       	mov    ds:0x1018d1e0,eax
1003cf9c:	8b 8f f0 0f 00 00    	mov    ecx,DWORD PTR [edi+0xff0]
1003cfa2:	8b 01                	mov    eax,DWORD PTR [ecx]
1003cfa4:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003cfa7:	ff d0                	call   eax
1003cfa9:	84 c0                	test   al,al
1003cfab:	74 72                	je     0x1003d01f
1003cfad:	80 bf f4 0f 00 00 00 	cmp    BYTE PTR [edi+0xff4],0x0
1003cfb4:	74 69                	je     0x1003d01f
1003cfb6:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003cfbc:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003cfc2:	f3 0f 10 85 98 fd ff 	movss  xmm0,DWORD PTR [ebp-0x268]
1003cfc9:	ff 
1003cfca:	0f 2f 87 f8 0f 00 00 	comiss xmm0,DWORD PTR [edi+0xff8]
1003cfd1:	76 4c                	jbe    0x1003d01f
1003cfd3:	8b 87 fc 0f 00 00    	mov    eax,DWORD PTR [edi+0xffc]
1003cfd9:	85 c0                	test   eax,eax
1003cfdb:	7e 30                	jle    0x1003d00d
1003cfdd:	8b b7 18 10 00 00    	mov    esi,DWORD PTR [edi+0x1018]
1003cfe3:	83 ec 0c             	sub    esp,0xc
1003cfe6:	8b cc                	mov    ecx,esp
1003cfe8:	83 c0 f1             	add    eax,0xfffffff1
1003cfeb:	89 87 fc 0f 00 00    	mov    DWORD PTR [edi+0xffc],eax
1003cff1:	50                   	push   eax
1003cff2:	68 ff 00 00 00       	push   0xff
1003cff7:	68 ff 00 00 00       	push   0xff
1003cffc:	68 ff 00 00 00       	push   0xff
1003d001:	e8 8a 68 07 00       	call   0x100b3890
1003d006:	8b 06                	mov    eax,DWORD PTR [esi]
1003d008:	8b ce                	mov    ecx,esi
1003d00a:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003d00d:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003d013:	dc 05 40 ee 13 10    	fadd   QWORD PTR ds:0x1013ee40
1003d019:	d9 9f f8 0f 00 00    	fstp   DWORD PTR [edi+0xff8]
1003d01f:	8b 8f 04 10 00 00    	mov    ecx,DWORD PTR [edi+0x1004]
1003d025:	8b 01                	mov    eax,DWORD PTR [ecx]
1003d027:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003d02a:	ff d0                	call   eax
1003d02c:	84 c0                	test   al,al
1003d02e:	0f 84 21 02 00 00    	je     0x1003d255
1003d034:	80 bf 08 10 00 00 00 	cmp    BYTE PTR [edi+0x1008],0x0
1003d03b:	0f 84 14 02 00 00    	je     0x1003d255
1003d041:	8b 8f 04 10 00 00    	mov    ecx,DWORD PTR [edi+0x1004]
1003d047:	8d 95 94 fd ff ff    	lea    edx,[ebp-0x26c]
1003d04d:	52                   	push   edx
1003d04e:	8d 95 90 fd ff ff    	lea    edx,[ebp-0x270]
1003d054:	52                   	push   edx
1003d055:	8b 01                	mov    eax,DWORD PTR [ecx]
1003d057:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003d05a:	f3 0f 10 87 44 0f 00 	movss  xmm0,DWORD PTR [edi+0xf44]
1003d061:	00 
1003d062:	f3 0f 11 85 8c fd ff 	movss  DWORD PTR [ebp-0x274],xmm0
1003d069:	ff 
1003d06a:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003d070:	f3 0f 10 8d 8c fd ff 	movss  xmm1,DWORD PTR [ebp-0x274]
1003d077:	ff 
1003d078:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003d07e:	f3 0f 10 85 98 fd ff 	movss  xmm0,DWORD PTR [ebp-0x268]
1003d085:	ff 
1003d086:	0f 2f c1             	comiss xmm0,xmm1
1003d089:	0f 82 8e 00 00 00    	jb     0x1003d11d
1003d08f:	f3 0f 58 8f 48 0f 00 	addss  xmm1,DWORD PTR [edi+0xf48]
1003d096:	00 
1003d097:	f3 0f 11 8d 8c fd ff 	movss  DWORD PTR [ebp-0x274],xmm1
1003d09e:	ff 
1003d09f:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003d0a5:	f3 0f 10 85 8c fd ff 	movss  xmm0,DWORD PTR [ebp-0x274]
1003d0ac:	ff 
1003d0ad:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003d0b3:	0f 2f 85 98 fd ff ff 	comiss xmm0,DWORD PTR [ebp-0x268]
1003d0ba:	76 61                	jbe    0x1003d11d
1003d0bc:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003d0c2:	d8 a7 44 0f 00 00    	fsub   DWORD PTR [edi+0xf44]
1003d0c8:	8b 8f 04 10 00 00    	mov    ecx,DWORD PTR [edi+0x1004]
1003d0ce:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003d0d4:	f3 0f 10 85 98 fd ff 	movss  xmm0,DWORD PTR [ebp-0x268]
1003d0db:	ff 
1003d0dc:	f3 0f 5e 87 48 0f 00 	divss  xmm0,DWORD PTR [edi+0xf48]
1003d0e3:	00 
1003d0e4:	8b 11                	mov    edx,DWORD PTR [ecx]
1003d0e6:	f3 0f 59 05 f4 68 14 	mulss  xmm0,DWORD PTR ds:0x101468f4
1003d0ed:	10 
1003d0ee:	f3 0f 2c c0          	cvttss2si eax,xmm0
1003d0f2:	05 66 ff ff ff       	add    eax,0xffffff66
1003d0f7:	50                   	push   eax
1003d0f8:	ff b5 90 fd ff ff    	push   DWORD PTR [ebp-0x270]
1003d0fe:	ff 12                	call   DWORD PTR [edx]
1003d100:	81 bd 94 fd ff ff 5f 	cmp    DWORD PTR [ebp-0x26c],0xffffff5f
1003d107:	ff ff ff 
1003d10a:	7d 11                	jge    0x1003d11d
1003d10c:	c6 87 08 10 00 00 00 	mov    BYTE PTR [edi+0x1008],0x0
1003d113:	c7 85 94 fd ff ff 5f 	mov    DWORD PTR [ebp-0x26c],0xffffff5f
1003d11a:	ff ff ff 
1003d11d:	f3 0f 10 87 4c 0f 00 	movss  xmm0,DWORD PTR [edi+0xf4c]
1003d124:	00 
1003d125:	f3 0f 11 85 8c fd ff 	movss  DWORD PTR [ebp-0x274],xmm0
1003d12c:	ff 
1003d12d:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003d133:	f3 0f 10 8d 8c fd ff 	movss  xmm1,DWORD PTR [ebp-0x274]
1003d13a:	ff 
1003d13b:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003d141:	f3 0f 10 85 98 fd ff 	movss  xmm0,DWORD PTR [ebp-0x268]
1003d148:	ff 
1003d149:	0f 2f c1             	comiss xmm0,xmm1
1003d14c:	0f 82 ad 00 00 00    	jb     0x1003d1ff
1003d152:	f3 0f 58 8f 50 0f 00 	addss  xmm1,DWORD PTR [edi+0xf50]
1003d159:	00 
1003d15a:	f3 0f 11 8d 8c fd ff 	movss  DWORD PTR [ebp-0x274],xmm1
1003d161:	ff 
1003d162:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003d168:	f3 0f 10 85 8c fd ff 	movss  xmm0,DWORD PTR [ebp-0x274]
1003d16f:	ff 
1003d170:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003d176:	0f 2f 85 98 fd ff ff 	comiss xmm0,DWORD PTR [ebp-0x268]
1003d17d:	0f 86 7c 00 00 00    	jbe    0x1003d1ff
1003d183:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003d189:	d8 a7 4c 0f 00 00    	fsub   DWORD PTR [edi+0xf4c]
1003d18f:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003d195:	f3 0f 10 85 98 fd ff 	movss  xmm0,DWORD PTR [ebp-0x268]
1003d19c:	ff 
1003d19d:	f3 0f 5e 87 50 0f 00 	divss  xmm0,DWORD PTR [edi+0xf50]
1003d1a4:	00 
1003d1a5:	0f 2f 05 f0 cc 13 10 	comiss xmm0,DWORD PTR ds:0x1013ccf0
1003d1ac:	76 07                	jbe    0x1003d1b5
1003d1ae:	c6 87 08 10 00 00 00 	mov    BYTE PTR [edi+0x1008],0x0
1003d1b5:	f3 0f 59 05 f8 68 14 	mulss  xmm0,DWORD PTR ds:0x101468f8
1003d1bc:	10 
1003d1bd:	8b 8f 04 10 00 00    	mov    ecx,DWORD PTR [edi+0x1004]
1003d1c3:	f3 0f 2c c0          	cvttss2si eax,xmm0
1003d1c7:	8b 11                	mov    edx,DWORD PTR [ecx]
1003d1c9:	50                   	push   eax
1003d1ca:	ff b5 90 fd ff ff    	push   DWORD PTR [ebp-0x270]
1003d1d0:	ff 12                	call   DWORD PTR [edx]
1003d1d2:	8b 85 94 fd ff ff    	mov    eax,DWORD PTR [ebp-0x26c]
1003d1d8:	3d 5f ff ff ff       	cmp    eax,0xffffff5f
1003d1dd:	7d 13                	jge    0x1003d1f2
1003d1df:	c6 87 08 10 00 00 00 	mov    BYTE PTR [edi+0x1008],0x0
1003d1e6:	c7 85 94 fd ff ff 5f 	mov    DWORD PTR [ebp-0x26c],0xffffff5f
1003d1ed:	ff ff ff 
1003d1f0:	eb 0d                	jmp    0x1003d1ff
1003d1f2:	33 c9                	xor    ecx,ecx
1003d1f4:	85 c0                	test   eax,eax
1003d1f6:	0f 4f c1             	cmovg  eax,ecx
1003d1f9:	89 85 94 fd ff ff    	mov    DWORD PTR [ebp-0x26c],eax
1003d1ff:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003d205:	f3 0f 10 87 4c 0f 00 	movss  xmm0,DWORD PTR [edi+0xf4c]
1003d20c:	00 
1003d20d:	d9 9d 98 fd ff ff    	fstp   DWORD PTR [ebp-0x268]
1003d213:	0f 2f 85 98 fd ff ff 	comiss xmm0,DWORD PTR [ebp-0x268]
1003d21a:	76 39                	jbe    0x1003d255
1003d21c:	6a 0d                	push   0xd
1003d21e:	ff 15 6c a2 13 10    	call   DWORD PTR ds:0x1013a26c
1003d224:	66 0f ba e0 0f       	bt     ax,0xf
1003d229:	73 2a                	jae    0x1003d255
1003d22b:	c7 87 44 0f 00 00 00 	mov    DWORD PTR [edi+0xf44],0x0
1003d232:	00 00 00 
1003d235:	c7 87 48 0f 00 00 00 	mov    DWORD PTR [edi+0xf48],0x0
1003d23c:	00 00 00 
1003d23f:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003d245:	d9 9f 4c 0f 00 00    	fstp   DWORD PTR [edi+0xf4c]
1003d24b:	c7 87 50 0f 00 00 00 	mov    DWORD PTR [edi+0xf50],0x3f800000
1003d252:	00 80 3f 
1003d255:	8b 8f d0 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfd0]
1003d25b:	8b 01                	mov    eax,DWORD PTR [ecx]
1003d25d:	ff 50 18             	call   DWORD PTR [eax+0x18]
1003d260:	8b 0d 48 d6 18 10    	mov    ecx,DWORD PTR ds:0x1018d648
1003d266:	8b d8                	mov    ebx,eax
1003d268:	33 c0                	xor    eax,eax
1003d26a:	8b b7 d0 0f 00 00    	mov    esi,DWORD PTR [edi+0xfd0]
1003d270:	38 05 b2 2b 54 10    	cmp    BYTE PTR ds:0x10542bb2,al
1003d276:	0f 45 c8             	cmovne ecx,eax
1003d279:	33 d2                	xor    edx,edx
1003d27b:	85 c9                	test   ecx,ecx
1003d27d:	8b 3e                	mov    edi,DWORD PTR [esi]
1003d27f:	b8 64 00 00 00       	mov    eax,0x64
1003d284:	0f 49 d1             	cmovns edx,ecx
1003d287:	8b ce                	mov    ecx,esi
1003d289:	2b c2                	sub    eax,edx
1003d28b:	66 0f 6e c0          	movd   xmm0,eax
1003d28f:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1003d293:	f2 0f 59 05 b8 68 14 	mulsd  xmm0,QWORD PTR ds:0x101468b8
1003d29a:	10 
1003d29b:	f2 0f 2c c0          	cvttsd2si eax,xmm0
1003d29f:	50                   	push   eax
1003d2a0:	53                   	push   ebx
1003d2a1:	ff 57 08             	call   DWORD PTR [edi+0x8]
1003d2a4:	8b bd 68 fd ff ff    	mov    edi,DWORD PTR [ebp-0x298]
1003d2aa:	8b 8f e0 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfe0]
1003d2b0:	8b 01                	mov    eax,DWORD PTR [ecx]
1003d2b2:	ff 50 18             	call   DWORD PTR [eax+0x18]
1003d2b5:	8b 8f e0 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfe0]
1003d2bb:	ba 64 00 00 00       	mov    edx,0x64
1003d2c0:	2b 97 00 10 00 00    	sub    edx,DWORD PTR [edi+0x1000]
1003d2c6:	8b 31                	mov    esi,DWORD PTR [ecx]
1003d2c8:	66 0f 6e c2          	movd   xmm0,edx
1003d2cc:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1003d2d0:	f2 0f 59 05 b8 68 14 	mulsd  xmm0,QWORD PTR ds:0x101468b8
1003d2d7:	10 
1003d2d8:	f2 0f 2c d0          	cvttsd2si edx,xmm0
1003d2dc:	52                   	push   edx
1003d2dd:	50                   	push   eax
1003d2de:	ff 56 08             	call   DWORD PTR [esi+0x8]
1003d2e1:	8b cf                	mov    ecx,edi
1003d2e3:	e8 10 64 07 00       	call   0x100b36f8
1003d2e8:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1003d2eb:	5f                   	pop    edi
1003d2ec:	5e                   	pop    esi
1003d2ed:	33 cd                	xor    ecx,ebp
1003d2ef:	5b                   	pop    ebx
1003d2f0:	e8 cb 6f 07 00       	call   0x100b42c0
1003d2f5:	8b e5                	mov    esp,ebp
1003d2f7:	5d                   	pop    ebp
1003d2f8:	c3                   	ret
