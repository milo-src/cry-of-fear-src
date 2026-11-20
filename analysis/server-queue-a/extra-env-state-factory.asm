
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012760 <.text+0x11760>:
10012760:	55                   	push   ebp
10012761:	8b ec                	mov    ebp,esp
10012763:	56                   	push   esi
10012764:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10012767:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001276a:	85 f6                	test   esi,esi
1001276c:	75 13                	jne    0x10012781
1001276e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10012774:	85 c0                	test   eax,eax
10012776:	74 06                	je     0x1001277e
10012778:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001277e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10012781:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10012787:	85 c9                	test   ecx,ecx
10012789:	74 07                	je     0x10012792
1001278b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001278e:	85 c0                	test   eax,eax
10012790:	75 27                	jne    0x100127b9
10012792:	68 ec 00 00 00       	push   0xec
10012797:	51                   	push   ecx
10012798:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1001279e:	83 c4 08             	add    esp,0x8
100127a1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100127a4:	85 c0                	test   eax,eax
100127a6:	74 0c                	je     0x100127b4
100127a8:	c7 00 60 51 1a 10    	mov    DWORD PTR [eax],0x101a5160
100127ae:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100127b1:	5e                   	pop    esi
100127b2:	5d                   	pop    ebp
100127b3:	c3                   	ret
100127b4:	33 c0                	xor    eax,eax
100127b6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100127b9:	5e                   	pop    esi
100127ba:	5d                   	pop    ebp
100127bb:	c3                   	ret
