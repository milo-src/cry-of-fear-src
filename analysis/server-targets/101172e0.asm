
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101172e0 <.text+0x1162e0>:
101172e0:	55                   	push   ebp
101172e1:	8b ec                	mov    ebp,esp
101172e3:	83 3d 90 31 22 10 00 	cmp    DWORD PTR ds:0x10223190,0x0
101172ea:	75 12                	jne    0x101172fe
101172ec:	68 80 57 1e 10       	push   0x101e5780
101172f1:	6a 01                	push   0x1
101172f3:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101172f9:	83 c4 08             	add    esp,0x8
101172fc:	5d                   	pop    ebp
101172fd:	c3                   	ret
101172fe:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10117301:	81 49 60 00 10 00 00 	or     DWORD PTR [ecx+0x60],0x1000
10117308:	8b 15 90 31 22 10    	mov    edx,DWORD PTR ds:0x10223190
1011730e:	8b 82 fc 00 00 00    	mov    eax,DWORD PTR [edx+0xfc]
10117314:	85 c0                	test   eax,eax
10117316:	75 0e                	jne    0x10117326
10117318:	89 8a fc 00 00 00    	mov    DWORD PTR [edx+0xfc],ecx
1011731e:	89 81 dc 00 00 00    	mov    DWORD PTR [ecx+0xdc],eax
10117324:	5d                   	pop    ebp
10117325:	c3                   	ret
10117326:	3b c1                	cmp    eax,ecx
10117328:	74 2a                	je     0x10117354
1011732a:	8b 90 dc 00 00 00    	mov    edx,DWORD PTR [eax+0xdc]
10117330:	85 d2                	test   edx,edx
10117332:	74 10                	je     0x10117344
10117334:	8b c2                	mov    eax,edx
10117336:	3b c1                	cmp    eax,ecx
10117338:	74 1a                	je     0x10117354
1011733a:	8b 90 dc 00 00 00    	mov    edx,DWORD PTR [eax+0xdc]
10117340:	85 d2                	test   edx,edx
10117342:	75 f0                	jne    0x10117334
10117344:	89 88 dc 00 00 00    	mov    DWORD PTR [eax+0xdc],ecx
1011734a:	c7 81 dc 00 00 00 00 	mov    DWORD PTR [ecx+0xdc],0x0
10117351:	00 00 00 
10117354:	5d                   	pop    ebp
10117355:	c3                   	ret
