
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10043130 <.text+0x42130>:
10043130:	56                   	push   esi
10043131:	8b f1                	mov    esi,ecx
10043133:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10043136:	83 b8 50 02 00 00 00 	cmp    DWORD PTR [eax+0x250],0x0
1004313d:	0f 85 2c 02 00 00    	jne    0x1004336f
10043143:	8b 88 54 02 00 00    	mov    ecx,DWORD PTR [eax+0x254]
10043149:	83 e9 00             	sub    ecx,0x0
1004314c:	74 74                	je     0x100431c2
1004314e:	83 e9 01             	sub    ecx,0x1
10043151:	74 3c                	je     0x1004318f
10043153:	83 e9 01             	sub    ecx,0x1
10043156:	0f 85 97 00 00 00    	jne    0x100431f3
1004315c:	f3 0f 10 48 58       	movss  xmm1,DWORD PTR [eax+0x58]
10043161:	0f 57 d2             	xorps  xmm2,xmm2
10043164:	0f 2f ca             	comiss xmm1,xmm2
10043167:	76 17                	jbe    0x10043180
10043169:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
10043170:	00 
10043171:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10043174:	f3 0f 5c c8          	subss  xmm1,xmm0
10043178:	f3 0f 11 48 58       	movss  DWORD PTR [eax+0x58],xmm1
1004317d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10043180:	0f 2f 50 58          	comiss xmm2,DWORD PTR [eax+0x58]
10043184:	76 6d                	jbe    0x100431f3
10043186:	c7 40 58 00 00 00 00 	mov    DWORD PTR [eax+0x58],0x0
1004318d:	eb 64                	jmp    0x100431f3
1004318f:	f3 0f 10 48 54       	movss  xmm1,DWORD PTR [eax+0x54]
10043194:	0f 57 d2             	xorps  xmm2,xmm2
10043197:	0f 2f ca             	comiss xmm1,xmm2
1004319a:	76 17                	jbe    0x100431b3
1004319c:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
100431a3:	00 
100431a4:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100431a7:	f3 0f 5c c8          	subss  xmm1,xmm0
100431ab:	f3 0f 11 48 54       	movss  DWORD PTR [eax+0x54],xmm1
100431b0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100431b3:	0f 2f 50 54          	comiss xmm2,DWORD PTR [eax+0x54]
100431b7:	76 3a                	jbe    0x100431f3
100431b9:	c7 40 54 00 00 00 00 	mov    DWORD PTR [eax+0x54],0x0
100431c0:	eb 31                	jmp    0x100431f3
100431c2:	f3 0f 10 48 50       	movss  xmm1,DWORD PTR [eax+0x50]
100431c7:	0f 57 d2             	xorps  xmm2,xmm2
100431ca:	0f 2f ca             	comiss xmm1,xmm2
100431cd:	76 17                	jbe    0x100431e6
100431cf:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
100431d6:	00 
100431d7:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100431da:	f3 0f 5c c8          	subss  xmm1,xmm0
100431de:	f3 0f 11 48 50       	movss  DWORD PTR [eax+0x50],xmm1
100431e3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100431e6:	0f 2f 50 50          	comiss xmm2,DWORD PTR [eax+0x50]
100431ea:	76 07                	jbe    0x100431f3
100431ec:	c7 40 50 00 00 00 00 	mov    DWORD PTR [eax+0x50],0x0
100431f3:	57                   	push   edi
100431f4:	8d be 98 01 00 00    	lea    edi,[esi+0x198]
100431fa:	8b cf                	mov    ecx,edi
100431fc:	e8 7f 45 fd ff       	call   0x10017780
10043201:	85 c0                	test   eax,eax
10043203:	0f 84 65 01 00 00    	je     0x1004336e
10043209:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004320c:	8b 80 88 01 00 00    	mov    eax,DWORD PTR [eax+0x188]
10043212:	83 e8 00             	sub    eax,0x0
10043215:	0f 84 ea 00 00 00    	je     0x10043305
1004321b:	83 e8 01             	sub    eax,0x1
1004321e:	74 79                	je     0x10043299
10043220:	83 e8 01             	sub    eax,0x1
10043223:	0f 85 45 01 00 00    	jne    0x1004336e
10043229:	8b cf                	mov    ecx,edi
1004322b:	e8 70 45 fd ff       	call   0x100177a0
10043230:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10043233:	f3 0f 10 40 58       	movss  xmm0,DWORD PTR [eax+0x58]
10043238:	0f 2f 86 94 01 00 00 	comiss xmm0,DWORD PTR [esi+0x194]
1004323f:	76 26                	jbe    0x10043267
10043241:	8b cf                	mov    ecx,edi
10043243:	e8 58 45 fd ff       	call   0x100177a0
10043248:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004324b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004324e:	f3 0f 10 49 58       	movss  xmm1,DWORD PTR [ecx+0x58]
10043253:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
1004325a:	00 
1004325b:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1004325e:	f3 0f 5c c8          	subss  xmm1,xmm0
10043262:	f3 0f 11 49 58       	movss  DWORD PTR [ecx+0x58],xmm1
10043267:	8b cf                	mov    ecx,edi
10043269:	e8 32 45 fd ff       	call   0x100177a0
1004326e:	f3 0f 10 86 94 01 00 	movss  xmm0,DWORD PTR [esi+0x194]
10043275:	00 
10043276:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10043279:	0f 2f 40 58          	comiss xmm0,DWORD PTR [eax+0x58]
1004327d:	0f 86 eb 00 00 00    	jbe    0x1004336e
10043283:	8b cf                	mov    ecx,edi
10043285:	e8 16 45 fd ff       	call   0x100177a0
1004328a:	5f                   	pop    edi
1004328b:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004328e:	8b 86 94 01 00 00    	mov    eax,DWORD PTR [esi+0x194]
10043294:	5e                   	pop    esi
10043295:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
10043298:	c3                   	ret
10043299:	8b cf                	mov    ecx,edi
1004329b:	e8 00 45 fd ff       	call   0x100177a0
100432a0:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100432a3:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
100432a8:	0f 2f 86 90 01 00 00 	comiss xmm0,DWORD PTR [esi+0x190]
100432af:	76 26                	jbe    0x100432d7
100432b1:	8b cf                	mov    ecx,edi
100432b3:	e8 e8 44 fd ff       	call   0x100177a0
100432b8:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100432bb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100432be:	f3 0f 10 49 54       	movss  xmm1,DWORD PTR [ecx+0x54]
100432c3:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
100432ca:	00 
100432cb:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100432ce:	f3 0f 5c c8          	subss  xmm1,xmm0
100432d2:	f3 0f 11 49 54       	movss  DWORD PTR [ecx+0x54],xmm1
100432d7:	8b cf                	mov    ecx,edi
100432d9:	e8 c2 44 fd ff       	call   0x100177a0
100432de:	f3 0f 10 86 90 01 00 	movss  xmm0,DWORD PTR [esi+0x190]
100432e5:	00 
100432e6:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100432e9:	0f 2f 40 54          	comiss xmm0,DWORD PTR [eax+0x54]
100432ed:	76 7f                	jbe    0x1004336e
100432ef:	8b cf                	mov    ecx,edi
100432f1:	e8 aa 44 fd ff       	call   0x100177a0
100432f6:	5f                   	pop    edi
100432f7:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100432fa:	8b 86 90 01 00 00    	mov    eax,DWORD PTR [esi+0x190]
10043300:	5e                   	pop    esi
10043301:	89 41 54             	mov    DWORD PTR [ecx+0x54],eax
10043304:	c3                   	ret
10043305:	8b cf                	mov    ecx,edi
10043307:	e8 94 44 fd ff       	call   0x100177a0
1004330c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004330f:	f3 0f 10 40 50       	movss  xmm0,DWORD PTR [eax+0x50]
10043314:	0f 2f 86 8c 01 00 00 	comiss xmm0,DWORD PTR [esi+0x18c]
1004331b:	76 26                	jbe    0x10043343
1004331d:	8b cf                	mov    ecx,edi
1004331f:	e8 7c 44 fd ff       	call   0x100177a0
10043324:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10043327:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004332a:	f3 0f 10 49 50       	movss  xmm1,DWORD PTR [ecx+0x50]
1004332f:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
10043336:	00 
10043337:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1004333a:	f3 0f 5c c8          	subss  xmm1,xmm0
1004333e:	f3 0f 11 49 50       	movss  DWORD PTR [ecx+0x50],xmm1
10043343:	8b cf                	mov    ecx,edi
10043345:	e8 56 44 fd ff       	call   0x100177a0
1004334a:	f3 0f 10 86 8c 01 00 	movss  xmm0,DWORD PTR [esi+0x18c]
10043351:	00 
10043352:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10043355:	0f 2f 40 50          	comiss xmm0,DWORD PTR [eax+0x50]
10043359:	76 13                	jbe    0x1004336e
1004335b:	8b cf                	mov    ecx,edi
1004335d:	e8 3e 44 fd ff       	call   0x100177a0
10043362:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10043365:	8b 86 8c 01 00 00    	mov    eax,DWORD PTR [esi+0x18c]
1004336b:	89 41 50             	mov    DWORD PTR [ecx+0x50],eax
1004336e:	5f                   	pop    edi
1004336f:	5e                   	pop    esi
10043370:	c3                   	ret
