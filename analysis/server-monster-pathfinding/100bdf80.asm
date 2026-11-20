
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bdf80 <.text+0xbcf80>:
100bdf80:	55                   	push   ebp
100bdf81:	8b ec                	mov    ebp,esp
100bdf83:	83 e4 f8             	and    esp,0xfffffff8
100bdf86:	83 ec 6c             	sub    esp,0x6c
100bdf89:	f3 0f 10 05 50 ef 1b 	movss  xmm0,DWORD PTR ds:0x101bef50
100bdf90:	10 
100bdf91:	53                   	push   ebx
100bdf92:	56                   	push   esi
100bdf93:	8b f1                	mov    esi,ecx
100bdf95:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
100bdf9b:	57                   	push   edi
100bdf9c:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
100bdf9f:	f3 0f 10 8b f4 00 00 	movss  xmm1,DWORD PTR [ebx+0xf4]
100bdfa6:	00 
100bdfa7:	0f 2f c1             	comiss xmm0,xmm1
100bdfaa:	77 12                	ja     0x100bdfbe
100bdfac:	f3 0f 10 05 bc fe 1a 	movss  xmm0,DWORD PTR ds:0x101afebc
100bdfb3:	10 
100bdfb4:	f3 0f 5d c1          	minss  xmm0,xmm1
100bdfb8:	f3 0f 11 44 24 28    	movss  DWORD PTR [esp+0x28],xmm0
100bdfbe:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100bdfc1:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100bdfc4:	f3 0f 10 83 fc 00 00 	movss  xmm0,DWORD PTR [ebx+0xfc]
100bdfcb:	00 
100bdfcc:	f3 0f 11 44 24 14    	movss  DWORD PTR [esp+0x14],xmm0
100bdfd2:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
100bdfd7:	f3 0f 5c 40 04       	subss  xmm0,DWORD PTR [eax+0x4]
100bdfdc:	f3 0f 10 11          	movss  xmm2,DWORD PTR [ecx]
100bdfe0:	f3 0f 5c 10          	subss  xmm2,DWORD PTR [eax]
100bdfe4:	f3 0f 10 59 08       	movss  xmm3,DWORD PTR [ecx+0x8]
100bdfe9:	f3 0f 5c 58 08       	subss  xmm3,DWORD PTR [eax+0x8]
100bdfee:	0f 28 c8             	movaps xmm1,xmm0
100bdff1:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
100bdff7:	f3 0f 59 c8          	mulss  xmm1,xmm0
100bdffb:	0f 28 c2             	movaps xmm0,xmm2
100bdffe:	f3 0f 11 54 24 34    	movss  DWORD PTR [esp+0x34],xmm2
100be004:	f3 0f 59 c2          	mulss  xmm0,xmm2
100be008:	f3 0f 11 5c 24 20    	movss  DWORD PTR [esp+0x20],xmm3
100be00e:	f3 0f 58 c8          	addss  xmm1,xmm0
100be012:	0f 28 c3             	movaps xmm0,xmm3
100be015:	f3 0f 59 c3          	mulss  xmm0,xmm3
100be019:	f3 0f 58 c8          	addss  xmm1,xmm0
100be01d:	0f 5a c1             	cvtps2pd xmm0,xmm1
100be020:	0f 57 c9             	xorps  xmm1,xmm1
100be023:	66 0f 2e c8          	ucomisd xmm1,xmm0
100be027:	77 06                	ja     0x100be02f
100be029:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100be02d:	eb 05                	jmp    0x100be034
100be02f:	e8 5c de 0a 00       	call   0x1016be90
100be034:	0f 57 db             	xorps  xmm3,xmm3
100be037:	0f 57 c9             	xorps  xmm1,xmm1
100be03a:	f2 0f 5a d8          	cvtsd2ss xmm3,xmm0
100be03e:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100be045:	10 
100be046:	0f 2e d9             	ucomiss xmm3,xmm1
100be049:	f3 0f 11 4c 24 38    	movss  DWORD PTR [esp+0x38],xmm1
100be04f:	0f 28 d0             	movaps xmm2,xmm0
100be052:	f3 0f 11 44 24 2c    	movss  DWORD PTR [esp+0x2c],xmm0
100be058:	9f                   	lahf
100be059:	f6 c4 44             	test   ah,0x44
100be05c:	7a 08                	jp     0x100be066
100be05e:	0f 57 ed             	xorps  xmm5,xmm5
100be061:	0f 57 e4             	xorps  xmm4,xmm4
100be064:	eb 1c                	jmp    0x100be082
100be066:	f3 0f 5e d3          	divss  xmm2,xmm3
100be06a:	0f 28 ea             	movaps xmm5,xmm2
100be06d:	0f 28 e2             	movaps xmm4,xmm2
100be070:	f3 0f 59 6c 24 34    	mulss  xmm5,DWORD PTR [esp+0x34]
100be076:	f3 0f 59 64 24 24    	mulss  xmm4,DWORD PTR [esp+0x24]
100be07c:	f3 0f 59 54 24 20    	mulss  xmm2,DWORD PTR [esp+0x20]
100be082:	0f 28 c2             	movaps xmm0,xmm2
100be085:	f3 0f 11 6c 24 30    	movss  DWORD PTR [esp+0x30],xmm5
100be08b:	f3 0f 59 c1          	mulss  xmm0,xmm1
100be08f:	0f 28 dc             	movaps xmm3,xmm4
100be092:	0f 28 fa             	movaps xmm7,xmm2
100be095:	f3 0f 11 64 24 10    	movss  DWORD PTR [esp+0x10],xmm4
100be09b:	0f 28 f4             	movaps xmm6,xmm4
100be09e:	f3 0f 11 54 24 34    	movss  DWORD PTR [esp+0x34],xmm2
100be0a4:	f3 0f 5c d8          	subss  xmm3,xmm0
100be0a8:	f3 0f 10 53 10       	movss  xmm2,DWORD PTR [ebx+0x10]
100be0ad:	f3 0f 5c c5          	subss  xmm0,xmm5
100be0b1:	f3 0f 11 5c 24 18    	movss  DWORD PTR [esp+0x18],xmm3
100be0b7:	0f 28 dd             	movaps xmm3,xmm5
100be0ba:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
100be0c0:	0f 28 c4             	movaps xmm0,xmm4
100be0c3:	f3 0f 59 c1          	mulss  xmm0,xmm1
100be0c7:	f3 0f 59 d9          	mulss  xmm3,xmm1
100be0cb:	f3 0f 10 4b 0c       	movss  xmm1,DWORD PTR [ebx+0xc]
100be0d0:	f3 0f 5c d8          	subss  xmm3,xmm0
100be0d4:	f3 0f 10 44 24 28    	movss  xmm0,DWORD PTR [esp+0x28]
100be0da:	f3 0f 11 5c 24 20    	movss  DWORD PTR [esp+0x20],xmm3
100be0e0:	0f 28 d8             	movaps xmm3,xmm0
100be0e3:	f3 0f 58 45 10       	addss  xmm0,DWORD PTR [ebp+0x10]
100be0e8:	f3 0f 59 1d a0 1e 1a 	mulss  xmm3,DWORD PTR ds:0x101a1ea0
100be0ef:	10 
100be0f0:	f3 0f 59 e8          	mulss  xmm5,xmm0
100be0f4:	0f 28 e3             	movaps xmm4,xmm3
100be0f7:	f3 0f 59 64 24 18    	mulss  xmm4,DWORD PTR [esp+0x18]
100be0fd:	f3 0f 59 f0          	mulss  xmm6,xmm0
100be101:	f3 0f 59 f8          	mulss  xmm7,xmm0
100be105:	0f 28 c5             	movaps xmm0,xmm5
100be108:	f3 0f 58 43 08       	addss  xmm0,DWORD PTR [ebx+0x8]
100be10d:	f3 0f 11 5c 24 24    	movss  DWORD PTR [esp+0x24],xmm3
100be113:	f3 0f 58 ce          	addss  xmm1,xmm6
100be117:	f3 0f 59 5c 24 1c    	mulss  xmm3,DWORD PTR [esp+0x1c]
100be11d:	f3 0f 58 d7          	addss  xmm2,xmm7
100be121:	f3 0f 5c c4          	subss  xmm0,xmm4
100be125:	f3 0f 5c cb          	subss  xmm1,xmm3
100be129:	f3 0f 11 44 24 48    	movss  DWORD PTR [esp+0x48],xmm0
100be12f:	f3 0f 10 44 24 24    	movss  xmm0,DWORD PTR [esp+0x24]
100be135:	f3 0f 59 44 24 20    	mulss  xmm0,DWORD PTR [esp+0x20]
100be13b:	f3 0f 11 4c 24 4c    	movss  DWORD PTR [esp+0x4c],xmm1
100be141:	f3 0f 5c d0          	subss  xmm2,xmm0
100be145:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
100be14b:	f3 0f 11 54 24 50    	movss  DWORD PTR [esp+0x50],xmm2
100be151:	f3 0f 10 43 0c       	movss  xmm0,DWORD PTR [ebx+0xc]
100be156:	f3 0f 10 4b 10       	movss  xmm1,DWORD PTR [ebx+0x10]
100be15b:	f3 0f 58 f0          	addss  xmm6,xmm0
100be15f:	f3 0f 58 6b 08       	addss  xmm5,DWORD PTR [ebx+0x8]
100be164:	f3 0f 58 f9          	addss  xmm7,xmm1
100be168:	f3 0f 58 f3          	addss  xmm6,xmm3
100be16c:	f3 0f 58 ec          	addss  xmm5,xmm4
100be170:	f3 0f 58 7c 24 24    	addss  xmm7,DWORD PTR [esp+0x24]
100be176:	f3 0f 11 74 24 40    	movss  DWORD PTR [esp+0x40],xmm6
100be17c:	f3 0f 11 6c 24 3c    	movss  DWORD PTR [esp+0x3c],xmm5
100be182:	f3 0f 11 7c 24 44    	movss  DWORD PTR [esp+0x44],xmm7
100be188:	83 bb 08 01 00 00 05 	cmp    DWORD PTR [ebx+0x108],0x5
100be18f:	0f 85 c9 00 00 00    	jne    0x100be25e
100be195:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100be19a:	f3 0f 10 54 24 10    	movss  xmm2,DWORD PTR [esp+0x10]
100be1a0:	f3 0f 10 74 24 30    	movss  xmm6,DWORD PTR [esp+0x30]
100be1a6:	f3 0f 10 6c 24 34    	movss  xmm5,DWORD PTR [esp+0x34]
100be1ac:	f3 0f 10 7c 24 14    	movss  xmm7,DWORD PTR [esp+0x14]
100be1b2:	f3 0f 10 4b 0c       	movss  xmm1,DWORD PTR [ebx+0xc]
100be1b7:	f3 0f 10 5b 10       	movss  xmm3,DWORD PTR [ebx+0x10]
100be1bc:	f3 0f 59 d0          	mulss  xmm2,xmm0
100be1c0:	f3 0f 59 e8          	mulss  xmm5,xmm0
100be1c4:	f3 0f 59 f0          	mulss  xmm6,xmm0
100be1c8:	0f 57 c0             	xorps  xmm0,xmm0
100be1cb:	f3 0f 59 f8          	mulss  xmm7,xmm0
100be1cf:	f3 0f 58 dd          	addss  xmm3,xmm5
100be1d3:	0f 28 c6             	movaps xmm0,xmm6
100be1d6:	f3 0f 11 54 24 10    	movss  DWORD PTR [esp+0x10],xmm2
100be1dc:	f3 0f 58 43 08       	addss  xmm0,DWORD PTR [ebx+0x8]
100be1e1:	0f 28 e7             	movaps xmm4,xmm7
100be1e4:	f3 0f 59 25 a0 1e 1a 	mulss  xmm4,DWORD PTR ds:0x101a1ea0
100be1eb:	10 
100be1ec:	f3 0f 58 c4          	addss  xmm0,xmm4
100be1f0:	f3 0f 11 44 24 54    	movss  DWORD PTR [esp+0x54],xmm0
100be1f6:	0f 28 c2             	movaps xmm0,xmm2
100be1f9:	f3 0f 10 54 24 14    	movss  xmm2,DWORD PTR [esp+0x14]
100be1ff:	f3 0f 58 c1          	addss  xmm0,xmm1
100be203:	f3 0f 59 15 a0 1e 1a 	mulss  xmm2,DWORD PTR ds:0x101a1ea0
100be20a:	10 
100be20b:	f3 0f 58 c4          	addss  xmm0,xmm4
100be20f:	f3 0f 58 da          	addss  xmm3,xmm2
100be213:	f3 0f 11 44 24 58    	movss  DWORD PTR [esp+0x58],xmm0
100be219:	f3 0f 11 5c 24 5c    	movss  DWORD PTR [esp+0x5c],xmm3
100be21f:	f3 0f 10 4b 0c       	movss  xmm1,DWORD PTR [ebx+0xc]
100be224:	f3 0f 10 43 10       	movss  xmm0,DWORD PTR [ebx+0x10]
100be229:	f3 0f 58 73 08       	addss  xmm6,DWORD PTR [ebx+0x8]
100be22e:	f3 0f 58 4c 24 10    	addss  xmm1,DWORD PTR [esp+0x10]
100be234:	f3 0f 58 e8          	addss  xmm5,xmm0
100be238:	f3 0f 5c f4          	subss  xmm6,xmm4
100be23c:	f3 0f 5c cc          	subss  xmm1,xmm4
100be240:	f3 0f 10 64 24 14    	movss  xmm4,DWORD PTR [esp+0x14]
100be246:	f3 0f 5c ea          	subss  xmm5,xmm2
100be24a:	f3 0f 11 74 24 60    	movss  DWORD PTR [esp+0x60],xmm6
100be250:	f3 0f 11 4c 24 64    	movss  DWORD PTR [esp+0x64],xmm1
100be256:	f3 0f 11 6c 24 68    	movss  DWORD PTR [esp+0x68],xmm5
100be25c:	eb 10                	jmp    0x100be26e
100be25e:	f3 0f 10 64 24 14    	movss  xmm4,DWORD PTR [esp+0x14]
100be264:	0f 57 c0             	xorps  xmm0,xmm0
100be267:	0f 28 fc             	movaps xmm7,xmm4
100be26a:	f3 0f 59 f8          	mulss  xmm7,xmm0
100be26e:	8b 86 bc 02 00 00    	mov    eax,DWORD PTR [esi+0x2bc]
100be274:	f3 0f 10 5c 24 28    	movss  xmm3,DWORD PTR [esp+0x28]
100be27a:	03 c0                	add    eax,eax
100be27c:	f3 0f 10 54 24 18    	movss  xmm2,DWORD PTR [esp+0x18]
100be282:	f3 0f 10 4c 24 20    	movss  xmm1,DWORD PTR [esp+0x20]
100be288:	f3 0f 59 d3          	mulss  xmm2,xmm3
100be28c:	f3 0f 7e 84 c6 38 02 	movq   xmm0,QWORD PTR [esi+eax*8+0x238]
100be293:	00 00 
100be295:	66 0f d6 44 24 6c    	movq   QWORD PTR [esp+0x6c],xmm0
100be29b:	f3 0f 10 44 24 1c    	movss  xmm0,DWORD PTR [esp+0x1c]
100be2a1:	f3 0f 58 d2          	addss  xmm2,xmm2
100be2a5:	8b 84 c6 40 02 00 00 	mov    eax,DWORD PTR [esi+eax*8+0x240]
100be2ac:	f3 0f 59 c3          	mulss  xmm0,xmm3
100be2b0:	89 44 24 74          	mov    DWORD PTR [esp+0x74],eax
100be2b4:	83 bb 08 01 00 00 05 	cmp    DWORD PTR [ebx+0x108],0x5
100be2bb:	f3 0f 59 cb          	mulss  xmm1,xmm3
100be2bf:	f3 0f 58 c0          	addss  xmm0,xmm0
100be2c3:	f3 0f 11 54 24 18    	movss  DWORD PTR [esp+0x18],xmm2
100be2c9:	f3 0f 58 c9          	addss  xmm1,xmm1
100be2cd:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
100be2d3:	f3 0f 11 4c 24 20    	movss  DWORD PTR [esp+0x20],xmm1
100be2d9:	75 1a                	jne    0x100be2f5
100be2db:	0f 28 c7             	movaps xmm0,xmm7
100be2de:	f3 0f 58 c7          	addss  xmm0,xmm7
100be2e2:	f3 0f 11 44 24 38    	movss  DWORD PTR [esp+0x38],xmm0
100be2e8:	0f 28 c4             	movaps xmm0,xmm4
100be2eb:	f3 0f 58 c4          	addss  xmm0,xmm4
100be2ef:	f3 0f 11 44 24 2c    	movss  DWORD PTR [esp+0x2c],xmm0
100be2f5:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
100be2f8:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
100be2ff:	00 
100be300:	8b 16                	mov    edx,DWORD PTR [esi]
100be302:	8d 44 24 3c          	lea    eax,[esp+0x3c]
100be306:	6a 00                	push   0x0
100be308:	57                   	push   edi
100be309:	50                   	push   eax
100be30a:	8d 43 08             	lea    eax,[ebx+0x8]
100be30d:	8b ce                	mov    ecx,esi
100be30f:	50                   	push   eax
100be310:	ff 92 58 01 00 00    	call   DWORD PTR [edx+0x158]
100be316:	83 f8 02             	cmp    eax,0x2
100be319:	75 20                	jne    0x100be33b
100be31b:	8b 06                	mov    eax,DWORD PTR [esi]
100be31d:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
100be321:	6a 00                	push   0x0
100be323:	57                   	push   edi
100be324:	51                   	push   ecx
100be325:	8d 4c 24 48          	lea    ecx,[esp+0x48]
100be329:	51                   	push   ecx
100be32a:	8b ce                	mov    ecx,esi
100be32c:	ff 90 58 01 00 00    	call   DWORD PTR [eax+0x158]
100be332:	83 f8 02             	cmp    eax,0x2
100be335:	0f 84 c1 01 00 00    	je     0x100be4fc
100be33b:	8b 16                	mov    edx,DWORD PTR [esi]
100be33d:	8d 44 24 48          	lea    eax,[esp+0x48]
100be341:	6a 00                	push   0x0
100be343:	57                   	push   edi
100be344:	50                   	push   eax
100be345:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100be348:	8b ce                	mov    ecx,esi
100be34a:	83 c0 08             	add    eax,0x8
100be34d:	50                   	push   eax
100be34e:	ff 92 58 01 00 00    	call   DWORD PTR [edx+0x158]
100be354:	83 f8 02             	cmp    eax,0x2
100be357:	75 20                	jne    0x100be379
100be359:	8b 06                	mov    eax,DWORD PTR [esi]
100be35b:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
100be35f:	6a 00                	push   0x0
100be361:	57                   	push   edi
100be362:	51                   	push   ecx
100be363:	8d 4c 24 54          	lea    ecx,[esp+0x54]
100be367:	51                   	push   ecx
100be368:	8b ce                	mov    ecx,esi
100be36a:	ff 90 58 01 00 00    	call   DWORD PTR [eax+0x158]
100be370:	83 f8 02             	cmp    eax,0x2
100be373:	0f 84 ad 01 00 00    	je     0x100be526
100be379:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100be37c:	83 b8 08 01 00 00 05 	cmp    DWORD PTR [eax+0x108],0x5
100be383:	75 79                	jne    0x100be3fe
100be385:	8b 16                	mov    edx,DWORD PTR [esi]
100be387:	8d 4c 24 54          	lea    ecx,[esp+0x54]
100be38b:	6a 00                	push   0x0
100be38d:	57                   	push   edi
100be38e:	51                   	push   ecx
100be38f:	83 c0 08             	add    eax,0x8
100be392:	8b ce                	mov    ecx,esi
100be394:	50                   	push   eax
100be395:	ff 92 58 01 00 00    	call   DWORD PTR [edx+0x158]
100be39b:	83 f8 02             	cmp    eax,0x2
100be39e:	75 20                	jne    0x100be3c0
100be3a0:	8b 06                	mov    eax,DWORD PTR [esi]
100be3a2:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
100be3a6:	6a 00                	push   0x0
100be3a8:	57                   	push   edi
100be3a9:	51                   	push   ecx
100be3aa:	8d 4c 24 60          	lea    ecx,[esp+0x60]
100be3ae:	51                   	push   ecx
100be3af:	8b ce                	mov    ecx,esi
100be3b1:	ff 90 58 01 00 00    	call   DWORD PTR [eax+0x158]
100be3b7:	83 f8 02             	cmp    eax,0x2
100be3ba:	0f 84 8c 01 00 00    	je     0x100be54c
100be3c0:	8b 16                	mov    edx,DWORD PTR [esi]
100be3c2:	8d 44 24 60          	lea    eax,[esp+0x60]
100be3c6:	6a 00                	push   0x0
100be3c8:	57                   	push   edi
100be3c9:	50                   	push   eax
100be3ca:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100be3cd:	8b ce                	mov    ecx,esi
100be3cf:	83 c0 08             	add    eax,0x8
100be3d2:	50                   	push   eax
100be3d3:	ff 92 58 01 00 00    	call   DWORD PTR [edx+0x158]
100be3d9:	83 f8 02             	cmp    eax,0x2
100be3dc:	75 20                	jne    0x100be3fe
100be3de:	8b 06                	mov    eax,DWORD PTR [esi]
100be3e0:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
100be3e4:	6a 00                	push   0x0
100be3e6:	57                   	push   edi
100be3e7:	51                   	push   ecx
100be3e8:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
100be3ec:	51                   	push   ecx
100be3ed:	8b ce                	mov    ecx,esi
100be3ef:	ff 90 58 01 00 00    	call   DWORD PTR [eax+0x158]
100be3f5:	83 f8 02             	cmp    eax,0x2
100be3f8:	0f 84 74 01 00 00    	je     0x100be572
100be3fe:	f3 0f 10 44 24 18    	movss  xmm0,DWORD PTR [esp+0x18]
100be404:	f3 0f 58 44 24 3c    	addss  xmm0,DWORD PTR [esp+0x3c]
100be40a:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
100be40d:	f3 0f 11 44 24 3c    	movss  DWORD PTR [esp+0x3c],xmm0
100be413:	f3 0f 10 44 24 1c    	movss  xmm0,DWORD PTR [esp+0x1c]
100be419:	f3 0f 58 44 24 40    	addss  xmm0,DWORD PTR [esp+0x40]
100be41f:	f3 0f 11 44 24 40    	movss  DWORD PTR [esp+0x40],xmm0
100be425:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
100be42b:	f3 0f 58 44 24 44    	addss  xmm0,DWORD PTR [esp+0x44]
100be431:	f3 0f 11 44 24 44    	movss  DWORD PTR [esp+0x44],xmm0
100be437:	f3 0f 10 44 24 48    	movss  xmm0,DWORD PTR [esp+0x48]
100be43d:	f3 0f 5c 44 24 18    	subss  xmm0,DWORD PTR [esp+0x18]
100be443:	f3 0f 11 44 24 48    	movss  DWORD PTR [esp+0x48],xmm0
100be449:	f3 0f 10 44 24 4c    	movss  xmm0,DWORD PTR [esp+0x4c]
100be44f:	f3 0f 5c 44 24 1c    	subss  xmm0,DWORD PTR [esp+0x1c]
100be455:	f3 0f 11 44 24 4c    	movss  DWORD PTR [esp+0x4c],xmm0
100be45b:	f3 0f 10 44 24 50    	movss  xmm0,DWORD PTR [esp+0x50]
100be461:	f3 0f 5c 44 24 20    	subss  xmm0,DWORD PTR [esp+0x20]
100be467:	f3 0f 11 44 24 50    	movss  DWORD PTR [esp+0x50],xmm0
100be46d:	83 bb 08 01 00 00 05 	cmp    DWORD PTR [ebx+0x108],0x5
100be474:	75 69                	jne    0x100be4df
100be476:	f3 0f 10 4c 24 38    	movss  xmm1,DWORD PTR [esp+0x38]
100be47c:	0f 28 c1             	movaps xmm0,xmm1
100be47f:	f3 0f 58 44 24 54    	addss  xmm0,DWORD PTR [esp+0x54]
100be485:	f3 0f 11 44 24 54    	movss  DWORD PTR [esp+0x54],xmm0
100be48b:	f3 0f 10 44 24 58    	movss  xmm0,DWORD PTR [esp+0x58]
100be491:	f3 0f 58 c1          	addss  xmm0,xmm1
100be495:	f3 0f 11 44 24 58    	movss  DWORD PTR [esp+0x58],xmm0
100be49b:	f3 0f 10 44 24 5c    	movss  xmm0,DWORD PTR [esp+0x5c]
100be4a1:	f3 0f 58 44 24 2c    	addss  xmm0,DWORD PTR [esp+0x2c]
100be4a7:	f3 0f 11 44 24 5c    	movss  DWORD PTR [esp+0x5c],xmm0
100be4ad:	f3 0f 10 44 24 60    	movss  xmm0,DWORD PTR [esp+0x60]
100be4b3:	f3 0f 5c c1          	subss  xmm0,xmm1
100be4b7:	f3 0f 11 44 24 60    	movss  DWORD PTR [esp+0x60],xmm0
100be4bd:	f3 0f 10 44 24 64    	movss  xmm0,DWORD PTR [esp+0x64]
100be4c3:	f3 0f 5c c1          	subss  xmm0,xmm1
100be4c7:	f3 0f 11 44 24 64    	movss  DWORD PTR [esp+0x64],xmm0
100be4cd:	f3 0f 10 44 24 68    	movss  xmm0,DWORD PTR [esp+0x68]
100be4d3:	f3 0f 5c 44 24 2c    	subss  xmm0,DWORD PTR [esp+0x2c]
100be4d9:	f3 0f 11 44 24 68    	movss  DWORD PTR [esp+0x68],xmm0
100be4df:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
100be4e3:	40                   	inc    eax
100be4e4:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
100be4e8:	83 f8 08             	cmp    eax,0x8
100be4eb:	0f 8c 0f fe ff ff    	jl     0x100be300
100be4f1:	33 c0                	xor    eax,eax
100be4f3:	5f                   	pop    edi
100be4f4:	5e                   	pop    esi
100be4f5:	5b                   	pop    ebx
100be4f6:	8b e5                	mov    esp,ebp
100be4f8:	5d                   	pop    ebp
100be4f9:	c2 14 00             	ret    0x14
100be4fc:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
100be4ff:	85 c9                	test   ecx,ecx
100be501:	0f 84 83 00 00 00    	je     0x100be58a
100be507:	f3 0f 7e 44 24 3c    	movq   xmm0,QWORD PTR [esp+0x3c]
100be50d:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
100be511:	66 0f d6 01          	movq   QWORD PTR [ecx],xmm0
100be515:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100be518:	b8 01 00 00 00       	mov    eax,0x1
100be51d:	5f                   	pop    edi
100be51e:	5e                   	pop    esi
100be51f:	5b                   	pop    ebx
100be520:	8b e5                	mov    esp,ebp
100be522:	5d                   	pop    ebp
100be523:	c2 14 00             	ret    0x14
100be526:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
100be529:	85 c9                	test   ecx,ecx
100be52b:	74 5d                	je     0x100be58a
100be52d:	f3 0f 7e 44 24 48    	movq   xmm0,QWORD PTR [esp+0x48]
100be533:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
100be537:	66 0f d6 01          	movq   QWORD PTR [ecx],xmm0
100be53b:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100be53e:	b8 01 00 00 00       	mov    eax,0x1
100be543:	5f                   	pop    edi
100be544:	5e                   	pop    esi
100be545:	5b                   	pop    ebx
100be546:	8b e5                	mov    esp,ebp
100be548:	5d                   	pop    ebp
100be549:	c2 14 00             	ret    0x14
100be54c:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
100be54f:	85 c9                	test   ecx,ecx
100be551:	74 37                	je     0x100be58a
100be553:	f3 0f 7e 44 24 54    	movq   xmm0,QWORD PTR [esp+0x54]
100be559:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
100be55d:	66 0f d6 01          	movq   QWORD PTR [ecx],xmm0
100be561:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100be564:	b8 01 00 00 00       	mov    eax,0x1
100be569:	5f                   	pop    edi
100be56a:	5e                   	pop    esi
100be56b:	5b                   	pop    ebx
100be56c:	8b e5                	mov    esp,ebp
100be56e:	5d                   	pop    ebp
100be56f:	c2 14 00             	ret    0x14
100be572:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
100be575:	85 c9                	test   ecx,ecx
100be577:	74 11                	je     0x100be58a
100be579:	f3 0f 7e 44 24 60    	movq   xmm0,QWORD PTR [esp+0x60]
100be57f:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
100be583:	66 0f d6 01          	movq   QWORD PTR [ecx],xmm0
100be587:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100be58a:	5f                   	pop    edi
100be58b:	5e                   	pop    esi
100be58c:	b8 01 00 00 00       	mov    eax,0x1
100be591:	5b                   	pop    ebx
100be592:	8b e5                	mov    esp,ebp
100be594:	5d                   	pop    ebp
100be595:	c2 14 00             	ret    0x14
