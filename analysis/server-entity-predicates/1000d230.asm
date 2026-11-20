
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d230 <.text+0xc230>:
1000d230:	55                   	push   ebp
1000d231:	8b ec                	mov    ebp,esp
1000d233:	56                   	push   esi
1000d234:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000d237:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000d23a:	85 f6                	test   esi,esi
1000d23c:	75 13                	jne    0x1000d251
1000d23e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000d244:	85 c0                	test   eax,eax
1000d246:	74 06                	je     0x1000d24e
1000d248:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000d24e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000d251:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000d257:	85 c9                	test   ecx,ecx
1000d259:	74 07                	je     0x1000d262
1000d25b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000d25e:	85 c0                	test   eax,eax
1000d260:	75 27                	jne    0x1000d289
1000d262:	68 e0 00 00 00       	push   0xe0
1000d267:	51                   	push   ecx
1000d268:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000d26e:	83 c4 08             	add    esp,0x8
1000d271:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000d274:	85 c0                	test   eax,eax
1000d276:	74 0c                	je     0x1000d284
1000d278:	c7 00 6c 29 1a 10    	mov    DWORD PTR [eax],0x101a296c
1000d27e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000d281:	5e                   	pop    esi
1000d282:	5d                   	pop    ebp
1000d283:	c3                   	ret
1000d284:	33 c0                	xor    eax,eax
1000d286:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000d289:	5e                   	pop    esi
1000d28a:	5d                   	pop    ebp
1000d28b:	c3                   	ret
