
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000fc20 <.text+0xec20>:
1000fc20:	55                   	push   ebp
1000fc21:	8b ec                	mov    ebp,esp
1000fc23:	56                   	push   esi
1000fc24:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000fc27:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fc2a:	85 f6                	test   esi,esi
1000fc2c:	75 13                	jne    0x1000fc41
1000fc2e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000fc34:	85 c0                	test   eax,eax
1000fc36:	74 06                	je     0x1000fc3e
1000fc38:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000fc3e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000fc41:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000fc47:	85 c9                	test   ecx,ecx
1000fc49:	74 07                	je     0x1000fc52
1000fc4b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000fc4e:	85 c0                	test   eax,eax
1000fc50:	75 27                	jne    0x1000fc79
1000fc52:	68 e0 00 00 00       	push   0xe0
1000fc57:	51                   	push   ecx
1000fc58:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000fc5e:	83 c4 08             	add    esp,0x8
1000fc61:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000fc64:	85 c0                	test   eax,eax
1000fc66:	74 0c                	je     0x1000fc74
1000fc68:	c7 00 8c 3d 1a 10    	mov    DWORD PTR [eax],0x101a3d8c
1000fc6e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fc71:	5e                   	pop    esi
1000fc72:	5d                   	pop    ebp
1000fc73:	c3                   	ret
1000fc74:	33 c0                	xor    eax,eax
1000fc76:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000fc79:	5e                   	pop    esi
1000fc7a:	5d                   	pop    ebp
1000fc7b:	c3                   	ret
