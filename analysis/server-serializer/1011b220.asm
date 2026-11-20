
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b220 <.text+0x11a220>:
1011b220:	55                   	push   ebp
1011b221:	8b ec                	mov    ebp,esp
1011b223:	83 ec 0c             	sub    esp,0xc
1011b226:	53                   	push   ebx
1011b227:	57                   	push   edi
1011b228:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
1011b22b:	8b d9                	mov    ebx,ecx
1011b22d:	8d 04 7f             	lea    eax,[edi+edi*2]
1011b230:	c1 e0 02             	shl    eax,0x2
1011b233:	50                   	push   eax
1011b234:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011b237:	e8 94 af ff ff       	call   0x101161d0
1011b23c:	85 ff                	test   edi,edi
1011b23e:	7e 79                	jle    0x1011b2b9
1011b240:	56                   	push   esi
1011b241:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1011b244:	83 c6 08             	add    esi,0x8
1011b247:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
1011b24e:	00 00 
1011b250:	f3 0f 10 46 f8       	movss  xmm0,DWORD PTR [esi-0x8]
1011b255:	f3 0f 10 4e fc       	movss  xmm1,DWORD PTR [esi-0x4]
1011b25a:	f3 0f 10 16          	movss  xmm2,DWORD PTR [esi]
1011b25e:	8b 03                	mov    eax,DWORD PTR [ebx]
1011b260:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1011b265:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
1011b26a:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
1011b26f:	85 c0                	test   eax,eax
1011b271:	74 30                	je     0x1011b2a3
1011b273:	83 b8 2c 05 00 00 00 	cmp    DWORD PTR [eax+0x52c],0x0
1011b27a:	74 27                	je     0x1011b2a3
1011b27c:	f3 0f 5c 80 44 05 00 	subss  xmm0,DWORD PTR [eax+0x544]
1011b283:	00 
1011b284:	f3 0f 5c 88 48 05 00 	subss  xmm1,DWORD PTR [eax+0x548]
1011b28b:	00 
1011b28c:	f3 0f 5c 90 4c 05 00 	subss  xmm2,DWORD PTR [eax+0x54c]
1011b293:	00 
1011b294:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1011b299:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
1011b29e:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
1011b2a3:	6a 0c                	push   0xc
1011b2a5:	8d 45 f4             	lea    eax,[ebp-0xc]
1011b2a8:	8b cb                	mov    ecx,ebx
1011b2aa:	50                   	push   eax
1011b2ab:	e8 90 ae ff ff       	call   0x10116140
1011b2b0:	83 c6 0c             	add    esi,0xc
1011b2b3:	83 ef 01             	sub    edi,0x1
1011b2b6:	75 98                	jne    0x1011b250
1011b2b8:	5e                   	pop    esi
1011b2b9:	5f                   	pop    edi
1011b2ba:	5b                   	pop    ebx
1011b2bb:	8b e5                	mov    esp,ebp
1011b2bd:	5d                   	pop    ebp
1011b2be:	c2 0c 00             	ret    0xc
