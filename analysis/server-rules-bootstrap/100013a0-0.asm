
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100013a0 <.text+0x3a0>:
100013a0:	55                   	push   ebp
100013a1:	8b ec                	mov    ebp,esp
100013a3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100013a6:	56                   	push   esi
100013a7:	8b f1                	mov    esi,ecx
100013a9:	b9 20 00 00 00       	mov    ecx,0x20
100013ae:	68 50 12 1a 10       	push   0x101a1250
100013b3:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
100013b6:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100013b9:	3b c1                	cmp    eax,ecx
100013bb:	0f 4f c1             	cmovg  eax,ecx
100013be:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
100013c1:	ff 15 48 2f 22 10    	call   DWORD PTR ds:0x10222f48
100013c7:	6a 08                	push   0x8
100013c9:	68 68 12 1a 10       	push   0x101a1268
100013ce:	ff 15 74 30 22 10    	call   DWORD PTR ds:0x10223074
100013d4:	6a 00                	push   0x0
100013d6:	68 74 12 1a 10       	push   0x101a1274
100013db:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
100013de:	ff 15 74 30 22 10    	call   DWORD PTR ds:0x10223074
100013e4:	68 20 12 1a 10       	push   0x101a1220
100013e9:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
100013ec:	ff 15 18 31 22 10    	call   DWORD PTR ds:0x10223118
100013f2:	83 c4 18             	add    esp,0x18
100013f5:	5e                   	pop    esi
100013f6:	85 c0                	test   eax,eax
100013f8:	75 0e                	jne    0x10001408
100013fa:	68 00 10 21 10       	push   0x10211000
100013ff:	ff 15 28 30 22 10    	call   DWORD PTR ds:0x10223028
10001405:	83 c4 04             	add    esp,0x4
10001408:	68 38 12 1a 10       	push   0x101a1238
1000140d:	ff 15 18 31 22 10    	call   DWORD PTR ds:0x10223118
10001413:	83 c4 04             	add    esp,0x4
10001416:	85 c0                	test   eax,eax
10001418:	75 0e                	jne    0x10001428
1000141a:	68 14 10 21 10       	push   0x10211014
1000141f:	ff 15 28 30 22 10    	call   DWORD PTR ds:0x10223028
10001425:	83 c4 04             	add    esp,0x4
10001428:	b0 01                	mov    al,0x1
1000142a:	5d                   	pop    ebp
1000142b:	c2 08 00             	ret    0x8
