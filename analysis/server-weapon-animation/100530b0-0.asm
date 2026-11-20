
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100530b0 <.text+0x520b0>:
100530b0:	8b 81 60 01 00 00    	mov    eax,DWORD PTR [ecx+0x160]
100530b6:	83 b8 98 1e 00 00 00 	cmp    DWORD PTR [eax+0x1e98],0x0
100530bd:	74 3d                	je     0x100530fc
100530bf:	c7 80 98 1e 00 00 00 	mov    DWORD PTR [eax+0x1e98],0x0
100530c6:	00 00 00 
100530c9:	8b 91 60 01 00 00    	mov    edx,DWORD PTR [ecx+0x160]
100530cf:	8b 82 d0 05 00 00    	mov    eax,DWORD PTR [edx+0x5d0]
100530d5:	a8 01                	test   al,0x1
100530d7:	74 0f                	je     0x100530e8
100530d9:	83 e0 fe             	and    eax,0xfffffffe
100530dc:	89 82 d0 05 00 00    	mov    DWORD PTR [edx+0x5d0],eax
100530e2:	8b 91 60 01 00 00    	mov    edx,DWORD PTR [ecx+0x160]
100530e8:	8b 82 d0 05 00 00    	mov    eax,DWORD PTR [edx+0x5d0]
100530ee:	a8 02                	test   al,0x2
100530f0:	74 53                	je     0x10053145
100530f2:	83 e0 fd             	and    eax,0xfffffffd
100530f5:	89 82 d0 05 00 00    	mov    DWORD PTR [edx+0x5d0],eax
100530fb:	c3                   	ret
100530fc:	80 b9 f9 01 00 00 00 	cmp    BYTE PTR [ecx+0x1f9],0x0
10053103:	75 36                	jne    0x1005313b
10053105:	8b 90 d0 05 00 00    	mov    edx,DWORD PTR [eax+0x5d0]
1005310b:	56                   	push   esi
1005310c:	f6 c2 01             	test   dl,0x1
1005310f:	75 0f                	jne    0x10053120
10053111:	83 ca 01             	or     edx,0x1
10053114:	89 90 d0 05 00 00    	mov    DWORD PTR [eax+0x5d0],edx
1005311a:	8b 81 60 01 00 00    	mov    eax,DWORD PTR [ecx+0x160]
10053120:	8b 90 d0 05 00 00    	mov    edx,DWORD PTR [eax+0x5d0]
10053126:	5e                   	pop    esi
10053127:	f6 c2 02             	test   dl,0x2
1005312a:	74 0f                	je     0x1005313b
1005312c:	83 e2 fd             	and    edx,0xfffffffd
1005312f:	89 90 d0 05 00 00    	mov    DWORD PTR [eax+0x5d0],edx
10053135:	8b 81 60 01 00 00    	mov    eax,DWORD PTR [ecx+0x160]
1005313b:	c7 80 98 1e 00 00 01 	mov    DWORD PTR [eax+0x1e98],0x1
10053142:	00 00 00 
10053145:	c3                   	ret
