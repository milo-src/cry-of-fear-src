
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10052e90 <.text+0x51e90>:
10052e90:	56                   	push   esi
10052e91:	8b f1                	mov    esi,ecx
10052e93:	8b 96 60 01 00 00    	mov    edx,DWORD PTR [esi+0x160]
10052e99:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10052e9c:	8b 82 cc 05 00 00    	mov    eax,DWORD PTR [edx+0x5cc]
10052ea2:	39 81 14 01 00 00    	cmp    DWORD PTR [ecx+0x114],eax
10052ea8:	74 0f                	je     0x10052eb9
10052eaa:	89 81 14 01 00 00    	mov    DWORD PTR [ecx+0x114],eax
10052eb0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10052eb3:	8b 96 60 01 00 00    	mov    edx,DWORD PTR [esi+0x160]
10052eb9:	ff b1 14 01 00 00    	push   DWORD PTR [ecx+0x114]
10052ebf:	8b 06                	mov    eax,DWORD PTR [esi]
10052ec1:	8b ce                	mov    ecx,esi
10052ec3:	52                   	push   edx
10052ec4:	ff 90 9c 01 00 00    	call   DWORD PTR [eax+0x19c]
10052eca:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10052ed0:	8b ce                	mov    ecx,esi
10052ed2:	6a 00                	push   0x0
10052ed4:	c7 86 28 01 00 00 00 	mov    DWORD PTR [esi+0x128],0x0
10052edb:	00 00 00 
10052ede:	6a 00                	push   0x0
10052ee0:	83 b8 98 1e 00 00 00 	cmp    DWORD PTR [eax+0x1e98],0x0
10052ee7:	68 48 9b 1a 10       	push   0x101a9b48
10052eec:	74 13                	je     0x10052f01
10052eee:	6a 07                	push   0x7
10052ef0:	68 f4 9a 1a 10       	push   0x101a9af4
10052ef5:	68 04 de 1a 10       	push   0x101ade04
10052efa:	e8 a1 92 0c 00       	call   0x1011c1a0
10052eff:	5e                   	pop    esi
10052f00:	c3                   	ret
10052f01:	6a 02                	push   0x2
10052f03:	68 f4 9a 1a 10       	push   0x101a9af4
10052f08:	68 04 de 1a 10       	push   0x101ade04
10052f0d:	e8 8e 92 0c 00       	call   0x1011c1a0
10052f12:	5e                   	pop    esi
10052f13:	c3                   	ret
