
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10088250 <.text+0x87250>:
10088250:	55                   	push   ebp
10088251:	8b ec                	mov    ebp,esp
10088253:	83 ec 50             	sub    esp,0x50
10088256:	56                   	push   esi
10088257:	8b f1                	mov    esi,ecx
10088259:	8d 4d e8             	lea    ecx,[ebp-0x18]
1008825c:	51                   	push   ecx
1008825d:	8b ce                	mov    ecx,esi
1008825f:	8b 06                	mov    eax,DWORD PTR [esi]
10088261:	ff 90 00 01 00 00    	call   DWORD PTR [eax+0x100]
10088267:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
1008826b:	66 0f d6 45 f4       	movq   QWORD PTR [ebp-0xc],xmm0
10088270:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
10088273:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10088276:	8d 45 b0             	lea    eax,[ebp-0x50]
10088279:	50                   	push   eax
1008827a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008827d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10088283:	8d 45 f4             	lea    eax,[ebp-0xc]
10088286:	6a 01                	push   0x1
10088288:	6a 01                	push   0x1
1008828a:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1008828d:	50                   	push   eax
1008828e:	e8 8d 25 09 00       	call   0x1011a820
10088293:	f3 0f 10 45 c0       	movss  xmm0,DWORD PTR [ebp-0x40]
10088298:	83 c4 18             	add    esp,0x18
1008829b:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100882a2:	5e                   	pop    esi
100882a3:	9f                   	lahf
100882a4:	f6 c4 44             	test   ah,0x44
100882a7:	7b 08                	jnp    0x100882b1
100882a9:	33 c0                	xor    eax,eax
100882ab:	8b e5                	mov    esp,ebp
100882ad:	5d                   	pop    ebp
100882ae:	c2 04 00             	ret    0x4
100882b1:	b8 01 00 00 00       	mov    eax,0x1
100882b6:	8b e5                	mov    esp,ebp
100882b8:	5d                   	pop    ebp
100882b9:	c2 04 00             	ret    0x4
