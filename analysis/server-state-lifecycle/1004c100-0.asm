
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004c100 <.text+0x4b100>:
1004c100:	55                   	push   ebp
1004c101:	8b ec                	mov    ebp,esp
1004c103:	83 ec 0c             	sub    esp,0xc
1004c106:	53                   	push   ebx
1004c107:	56                   	push   esi
1004c108:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1004c10b:	8b d9                	mov    ebx,ecx
1004c10d:	85 f6                	test   esi,esi
1004c10f:	0f 84 3f 02 00 00    	je     0x1004c354
1004c115:	8b 06                	mov    eax,DWORD PTR [esi]
1004c117:	8b ce                	mov    ecx,esi
1004c119:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1004c11f:	85 c0                	test   eax,eax
1004c121:	0f 84 2d 02 00 00    	je     0x1004c354
1004c127:	56                   	push   esi
1004c128:	ff b3 7c 01 00 00    	push   DWORD PTR [ebx+0x17c]
1004c12e:	e8 2d cf 0c 00       	call   0x10119060
1004c133:	83 c4 08             	add    esp,0x8
1004c136:	85 c0                	test   eax,eax
1004c138:	0f 84 16 02 00 00    	je     0x1004c354
1004c13e:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1004c141:	83 b9 cc 01 00 00 00 	cmp    DWORD PTR [ecx+0x1cc],0x0
1004c148:	0f 84 06 02 00 00    	je     0x1004c354
1004c14e:	83 b9 d8 01 00 00 00 	cmp    DWORD PTR [ecx+0x1d8],0x0
1004c155:	0f 84 f9 01 00 00    	je     0x1004c354
1004c15b:	8b 93 80 01 00 00    	mov    edx,DWORD PTR [ebx+0x180]
1004c161:	85 d2                	test   edx,edx
1004c163:	74 1f                	je     0x1004c184
1004c165:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004c16a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004c170:	03 c2                	add    eax,edx
1004c172:	50                   	push   eax
1004c173:	68 80 15 1b 10       	push   0x101b1580
1004c178:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
1004c17e:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1004c181:	83 c4 08             	add    esp,0x8
1004c184:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004c189:	8b 89 cc 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1cc]
1004c18f:	57                   	push   edi
1004c190:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004c196:	51                   	push   ecx
1004c197:	6a 00                	push   0x0
1004c199:	e8 f2 c3 0c 00       	call   0x10118590
1004c19e:	ff 76 04             	push   DWORD PTR [esi+0x4]
1004c1a1:	8b f8                	mov    edi,eax
1004c1a3:	e8 38 64 fc ff       	call   0x100125e0
1004c1a8:	83 c4 0c             	add    esp,0xc
1004c1ab:	8b c8                	mov    ecx,eax
1004c1ad:	85 ff                	test   edi,edi
1004c1af:	0f 84 9e 01 00 00    	je     0x1004c353
1004c1b5:	85 c9                	test   ecx,ecx
1004c1b7:	0f 84 96 01 00 00    	je     0x1004c353
1004c1bd:	83 3d 20 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f20,0x0
1004c1c4:	74 1b                	je     0x1004c1e1
1004c1c6:	6a 00                	push   0x0
1004c1c8:	6a 02                	push   0x2
1004c1ca:	68 90 15 1b 10       	push   0x101b1590
1004c1cf:	51                   	push   ecx
1004c1d0:	e8 3b d6 0c 00       	call   0x10119810
1004c1d5:	83 c4 10             	add    esp,0x10
1004c1d8:	5f                   	pop    edi
1004c1d9:	5e                   	pop    esi
1004c1da:	5b                   	pop    ebx
1004c1db:	8b e5                	mov    esp,ebp
1004c1dd:	5d                   	pop    ebp
1004c1de:	c2 10 00             	ret    0x10
1004c1e1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1004c1e4:	83 b8 48 02 00 00 01 	cmp    DWORD PTR [eax+0x248],0x1
1004c1eb:	74 1b                	je     0x1004c208
1004c1ed:	6a 00                	push   0x0
1004c1ef:	6a 02                	push   0x2
1004c1f1:	68 94 c2 1a 10       	push   0x101ac294
1004c1f6:	51                   	push   ecx
1004c1f7:	e8 14 d6 0c 00       	call   0x10119810
1004c1fc:	83 c4 10             	add    esp,0x10
1004c1ff:	5f                   	pop    edi
1004c200:	5e                   	pop    esi
1004c201:	5b                   	pop    ebx
1004c202:	8b e5                	mov    esp,ebp
1004c204:	5d                   	pop    ebp
1004c205:	c2 10 00             	ret    0x10
1004c208:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1004c20b:	8b 91 ec 01 00 00    	mov    edx,DWORD PTR [ecx+0x1ec]
1004c211:	85 d2                	test   edx,edx
1004c213:	74 34                	je     0x1004c249
1004c215:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004c21a:	6a 64                	push   0x64
1004c21c:	6a 00                	push   0x0
1004c21e:	83 ec 08             	sub    esp,0x8
1004c221:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004c227:	03 c2                	add    eax,edx
1004c229:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1004c230:	3f 
1004c231:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1004c238:	50                   	push   eax
1004c239:	6a 00                	push   0x0
1004c23b:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
1004c241:	e8 aa 07 0b 00       	call   0x100fc9f0
1004c246:	83 c4 1c             	add    esp,0x1c
1004c249:	a1 10 2e 22 10       	mov    eax,ds:0x10222e10
1004c24e:	85 c0                	test   eax,eax
1004c250:	74 13                	je     0x1004c265
1004c252:	68 38 0f 01 00       	push   0x10f38
1004c257:	83 c0 04             	add    eax,0x4
1004c25a:	6a 00                	push   0x0
1004c25c:	50                   	push   eax
1004c25d:	e8 2e 32 0f 00       	call   0x1013f490
1004c262:	83 c4 0c             	add    esp,0xc
1004c265:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004c26a:	bf 01 00 00 00       	mov    edi,0x1
1004c26f:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
1004c275:	0f 8c c2 00 00 00    	jl     0x1004c33d
1004c27b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1004c280:	57                   	push   edi
1004c281:	e8 fa d3 0c 00       	call   0x10119680
1004c286:	8b f0                	mov    esi,eax
1004c288:	83 c4 04             	add    esp,0x4
1004c28b:	85 f6                	test   esi,esi
1004c28d:	0f 84 98 00 00 00    	je     0x1004c32b
1004c293:	6a 05                	push   0x5
1004c295:	68 ff 00 00 00       	push   0xff
1004c29a:	83 ec 08             	sub    esp,0x8
1004c29d:	c6 86 a4 1e 00 00 01 	mov    BYTE PTR [esi+0x1ea4],0x1
1004c2a4:	8d 45 f4             	lea    eax,[ebp-0xc]
1004c2a7:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
1004c2ae:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
1004c2b5:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1004c2bc:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x40000000
1004c2c3:	40 
1004c2c4:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
1004c2cb:	50                   	push   eax
1004c2cc:	56                   	push   esi
1004c2cd:	e8 2e d9 0c 00       	call   0x10119c00
1004c2d2:	83 c4 18             	add    esp,0x18
1004c2d5:	8b ce                	mov    ecx,esi
1004c2d7:	6a 00                	push   0x0
1004c2d9:	e8 12 2d 09 00       	call   0x100deff0
1004c2de:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004c2e1:	83 8e 00 25 00 00 09 	or     DWORD PTR [esi+0x2500],0x9
1004c2e8:	81 88 a8 01 00 00 80 	or     DWORD PTR [eax+0x1a8],0x80
1004c2ef:	00 00 00 
1004c2f2:	8b 8b 80 01 00 00    	mov    ecx,DWORD PTR [ebx+0x180]
1004c2f8:	85 c9                	test   ecx,ecx
1004c2fa:	74 1f                	je     0x1004c31b
1004c2fc:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1004c2ff:	51                   	push   ecx
1004c300:	f3 0f 10 80 58 02 00 	movss  xmm0,DWORD PTR [eax+0x258]
1004c307:	00 
1004c308:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1004c30d:	ff b0 48 02 00 00    	push   DWORD PTR [eax+0x248]
1004c313:	51                   	push   ecx
1004c314:	8b ce                	mov    ecx,esi
1004c316:	e8 a5 e2 09 00       	call   0x100ea5c0
1004c31b:	8b 0d 10 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222e10
1004c321:	85 c9                	test   ecx,ecx
1004c323:	74 06                	je     0x1004c32b
1004c325:	56                   	push   esi
1004c326:	e8 55 e1 fd ff       	call   0x1002a480
1004c32b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004c330:	47                   	inc    edi
1004c331:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
1004c337:	0f 8e 43 ff ff ff    	jle    0x1004c280
1004c33d:	8b 03                	mov    eax,DWORD PTR [ebx]
1004c33f:	51                   	push   ecx
1004c340:	8b cb                	mov    ecx,ebx
1004c342:	c7 43 78 a0 ac 04 10 	mov    DWORD PTR [ebx+0x78],0x1004aca0
1004c349:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
1004c350:	ff 50 08             	call   DWORD PTR [eax+0x8]
1004c353:	5f                   	pop    edi
1004c354:	5e                   	pop    esi
1004c355:	5b                   	pop    ebx
1004c356:	8b e5                	mov    esp,ebp
1004c358:	5d                   	pop    ebp
1004c359:	c2 10 00             	ret    0x10
