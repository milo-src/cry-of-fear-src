
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01da62cf <.text+0xa52cf>:
 1da62cf:	55                   	push   ebp
 1da62d0:	8b ec                	mov    ebp,esp
 1da62d2:	83 ec 08             	sub    esp,0x8
 1da62d5:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1da62d8:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
 1da62db:	83 7d f8 09          	cmp    DWORD PTR [ebp-0x8],0x9
 1da62df:	0f 87 99 00 00 00    	ja     0x1da637e
 1da62e5:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
 1da62e8:	ff 24 8d 95 63 da 01 	jmp    DWORD PTR [ecx*4+0x1da6395]
 1da62ef:	b8 10 25 57 02       	mov    eax,0x2572510
 1da62f4:	e9 98 00 00 00       	jmp    0x1da6391
 1da62f9:	8b 15 f4 f2 42 02    	mov    edx,DWORD PTR ds:0x242f2f4
 1da62ff:	52                   	push   edx
 1da6300:	e8 00 21 00 00       	call   0x1da8405
 1da6305:	83 c4 04             	add    esp,0x4
 1da6308:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1da630b:	83 7d fc 01          	cmp    DWORD PTR [ebp-0x4],0x1
 1da630f:	7c 0b                	jl     0x1da631c
 1da6311:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1da6314:	3b 05 28 f3 51 02    	cmp    eax,DWORD PTR ds:0x251f328
 1da631a:	7e 0d                	jle    0x1da6329
 1da631c:	68 f8 23 ec 01       	push   0x1ec23f8
 1da6321:	e8 4d 75 fd ff       	call   0x1d7d873
 1da6326:	83 c4 04             	add    esp,0x4
 1da6329:	83 7d 08 01          	cmp    DWORD PTR [ebp+0x8],0x1
 1da632d:	75 18                	jne    0x1da6347
 1da632f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
 1da6332:	83 e9 01             	sub    ecx,0x1
 1da6335:	69 c9 18 50 00 00    	imul   ecx,ecx,0x5018
 1da633b:	8b 15 24 f3 51 02    	mov    edx,DWORD PTR ds:0x251f324
 1da6341:	8d 44 0a 7c          	lea    eax,[edx+ecx*1+0x7c]
 1da6345:	eb 4a                	jmp    0x1da6391
 1da6347:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1da634a:	83 e8 01             	sub    eax,0x1
 1da634d:	69 c0 18 50 00 00    	imul   eax,eax,0x5018
 1da6353:	8b 0d 24 f3 51 02    	mov    ecx,DWORD PTR ds:0x251f324
 1da6359:	8d 84 01 c0 25 00 00 	lea    eax,[ecx+eax*1+0x25c0]
 1da6360:	eb 2f                	jmp    0x1da6391
 1da6362:	b8 c4 34 57 02       	mov    eax,0x25734c4
 1da6367:	eb 28                	jmp    0x1da6391
 1da6369:	b8 a0 4c 57 02       	mov    eax,0x2574ca0
 1da636e:	eb 21                	jmp    0x1da6391
 1da6370:	b8 78 44 57 02       	mov    eax,0x2574478
 1da6375:	eb 1a                	jmp    0x1da6391
 1da6377:	b8 8c 48 57 02       	mov    eax,0x257488c
 1da637c:	eb 13                	jmp    0x1da6391
 1da637e:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1da6381:	52                   	push   edx
 1da6382:	68 18 24 ec 01       	push   0x1ec2418
 1da6387:	e8 e7 74 fd ff       	call   0x1d7d873
 1da638c:	83 c4 08             	add    esp,0x8
 1da638f:	33 c0                	xor    eax,eax
 1da6391:	8b e5                	mov    esp,ebp
 1da6393:	5d                   	pop    ebp
 1da6394:	c3                   	ret
