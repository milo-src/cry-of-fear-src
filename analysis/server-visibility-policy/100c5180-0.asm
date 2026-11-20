
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c5180 <.text+0xc4180>:
100c5180:	55                   	push   ebp
100c5181:	8b ec                	mov    ebp,esp
100c5183:	81 ec 04 01 00 00    	sub    esp,0x104
100c5189:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100c518e:	33 c5                	xor    eax,ebp
100c5190:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100c5193:	56                   	push   esi
100c5194:	8b f1                	mov    esi,ecx
100c5196:	b9 88 37 22 10       	mov    ecx,0x10223788
100c519b:	57                   	push   edi
100c519c:	c7 06 8c 60 1d 10    	mov    DWORD PTR [esi],0x101d608c
100c51a2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c51a7:	ff b0 90 00 00 00    	push   DWORD PTR [eax+0x90]
100c51ad:	68 f0 77 21 10       	push   0x102177f0
100c51b2:	e8 e9 c1 f3 ff       	call   0x100013a0
100c51b7:	8b ce                	mov    ecx,esi
100c51b9:	c6 05 a1 31 22 10 00 	mov    BYTE PTR ds:0x102231a1,0x0
100c51c0:	c6 05 a2 31 22 10 00 	mov    BYTE PTR ds:0x102231a2,0x0
100c51c7:	c7 05 a4 31 22 10 00 	mov    DWORD PTR ds:0x102231a4,0x0
100c51ce:	00 00 00 
100c51d1:	e8 6a 44 00 00       	call   0x100c9640
100c51d6:	c7 86 dc 00 00 00 00 	mov    DWORD PTR [esi+0xdc],0x0
100c51dd:	00 00 00 
100c51e0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c51e5:	c7 05 98 31 22 10 00 	mov    DWORD PTR ds:0x10223198,0x0
100c51ec:	00 00 00 
100c51ef:	51                   	push   ecx
100c51f0:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100c51f7:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c51fb:	f3 0f 58 05 f4 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ef4
100c5202:	10 
100c5203:	68 c8 b6 1c 10       	push   0x101cb6c8
100c5208:	c6 05 a0 31 22 10 00 	mov    BYTE PTR ds:0x102231a0,0x0
100c520f:	f3 0f 11 05 9c 31 22 	movss  DWORD PTR ds:0x1022319c,xmm0
100c5216:	10 
100c5217:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
100c521d:	83 c4 08             	add    esp,0x8
100c5220:	ff 15 14 31 22 10    	call   DWORD PTR ds:0x10223114
100c5226:	85 c0                	test   eax,eax
100c5228:	74 20                	je     0x100c524a
100c522a:	68 a8 61 1d 10       	push   0x101d61a8
100c522f:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100c5235:	8b f8                	mov    edi,eax
100c5237:	83 c4 04             	add    esp,0x4
100c523a:	85 ff                	test   edi,edi
100c523c:	74 54                	je     0x100c5292
100c523e:	80 3f 00             	cmp    BYTE PTR [edi],0x0
100c5241:	74 4f                	je     0x100c5292
100c5243:	68 b8 61 1d 10       	push   0x101d61b8
100c5248:	eb 1e                	jmp    0x100c5268
100c524a:	68 ec 61 1d 10       	push   0x101d61ec
100c524f:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100c5255:	8b f8                	mov    edi,eax
100c5257:	83 c4 04             	add    esp,0x4
100c525a:	85 ff                	test   edi,edi
100c525c:	74 34                	je     0x100c5292
100c525e:	80 3f 00             	cmp    BYTE PTR [edi],0x0
100c5261:	74 2f                	je     0x100c5292
100c5263:	68 fc 61 1d 10       	push   0x101d61fc
100c5268:	6a 01                	push   0x1
100c526a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c5270:	57                   	push   edi
100c5271:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
100c5277:	68 e0 61 1d 10       	push   0x101d61e0
100c527c:	50                   	push   eax
100c527d:	e8 de 9e f5 ff       	call   0x1001f160
100c5282:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
100c5288:	50                   	push   eax
100c5289:	ff 15 e4 2f 22 10    	call   DWORD PTR ds:0x10222fe4
100c528f:	83 c4 18             	add    esp,0x18
100c5292:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100c5295:	8b c6                	mov    eax,esi
100c5297:	5f                   	pop    edi
100c5298:	33 cd                	xor    ecx,ebp
100c529a:	5e                   	pop    esi
100c529b:	e8 13 89 07 00       	call   0x1013dbb3
100c52a0:	8b e5                	mov    esp,ebp
100c52a2:	5d                   	pop    ebp
100c52a3:	c3                   	ret
