
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1550 <.text+0xc0550>:
100c1550:	55                   	push   ebp
100c1551:	8b ec                	mov    ebp,esp
100c1553:	56                   	push   esi
100c1554:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c1557:	57                   	push   edi
100c1558:	8b f9                	mov    edi,ecx
100c155a:	85 f6                	test   esi,esi
100c155c:	74 6f                	je     0x100c15cd
100c155e:	8b 07                	mov    eax,DWORD PTR [edi]
100c1560:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
100c1566:	85 c0                	test   eax,eax
100c1568:	74 63                	je     0x100c15cd
100c156a:	80 3e 21             	cmp    BYTE PTR [esi],0x21
100c156d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c1570:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100c1575:	75 2e                	jne    0x100c15a5
100c1577:	6a 64                	push   0x64
100c1579:	6a 00                	push   0x0
100c157b:	83 ec 08             	sub    esp,0x8
100c157e:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100c1584:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c1589:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c158e:	56                   	push   esi
100c158f:	6a 02                	push   0x2
100c1591:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c1597:	e8 54 b4 03 00       	call   0x100fc9f0
100c159c:	83 c4 1c             	add    esp,0x1c
100c159f:	5f                   	pop    edi
100c15a0:	5e                   	pop    esi
100c15a1:	5d                   	pop    ebp
100c15a2:	c2 10 00             	ret    0x10
100c15a5:	6a ff                	push   0xffffffff
100c15a7:	6a 64                	push   0x64
100c15a9:	6a 00                	push   0x0
100c15ab:	83 ec 08             	sub    esp,0x8
100c15ae:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100c15b4:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c15b9:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c15be:	56                   	push   esi
100c15bf:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c15c5:	e8 86 ce 03 00       	call   0x100fe450
100c15ca:	83 c4 1c             	add    esp,0x1c
100c15cd:	5f                   	pop    edi
100c15ce:	5e                   	pop    esi
100c15cf:	5d                   	pop    ebp
100c15d0:	c2 10 00             	ret    0x10
