
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017630 <.text+0x16630>:
10017630:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10017633:	8b 80 4c 01 00 00    	mov    eax,DWORD PTR [eax+0x14c]
10017639:	83 f8 04             	cmp    eax,0x4
1001763c:	75 06                	jne    0x10017644
1001763e:	83 c8 ff             	or     eax,0xffffffff
10017641:	c2 04 00             	ret    0x4
10017644:	85 c0                	test   eax,eax
10017646:	74 08                	je     0x10017650
10017648:	b8 23 00 00 00       	mov    eax,0x23
1001764d:	c2 04 00             	ret    0x4
10017650:	6a 04                	push   0x4
10017652:	6a 00                	push   0x0
10017654:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1001765a:	83 c4 08             	add    esp,0x8
1001765d:	c2 04 00             	ret    0x4
