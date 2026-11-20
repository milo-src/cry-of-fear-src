
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ce70 <.text+0x8be70>:
1008ce70:	55                   	push   ebp
1008ce71:	8b ec                	mov    ebp,esp
1008ce73:	56                   	push   esi
1008ce74:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1008ce77:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008ce7a:	85 f6                	test   esi,esi
1008ce7c:	75 13                	jne    0x1008ce91
1008ce7e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1008ce84:	85 c0                	test   eax,eax
1008ce86:	74 06                	je     0x1008ce8e
1008ce88:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1008ce8e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008ce91:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1008ce97:	85 c9                	test   ecx,ecx
1008ce99:	74 07                	je     0x1008cea2
1008ce9b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1008ce9e:	85 c0                	test   eax,eax
1008cea0:	75 27                	jne    0x1008cec9
1008cea2:	68 8c 01 00 00       	push   0x18c
1008cea7:	51                   	push   ecx
1008cea8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1008ceae:	83 c4 08             	add    esp,0x8
1008ceb1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1008ceb4:	85 c0                	test   eax,eax
1008ceb6:	74 0c                	je     0x1008cec4
1008ceb8:	c7 00 c0 f6 1b 10    	mov    DWORD PTR [eax],0x101bf6c0
1008cebe:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008cec1:	5e                   	pop    esi
1008cec2:	5d                   	pop    ebp
1008cec3:	c3                   	ret
1008cec4:	33 c0                	xor    eax,eax
1008cec6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008cec9:	5e                   	pop    esi
1008ceca:	5d                   	pop    ebp
1008cecb:	c3                   	ret
