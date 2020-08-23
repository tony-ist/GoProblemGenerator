#ifndef PACHI_UCT_PLUGINS_H
#define PACHI_UCT_PLUGINS_H


/* The pluginset structure of current UCT context. */
struct uct_pluginset;
struct uct_pluginset *pluginset_init(board_t *b);
void pluginset_done(struct uct_pluginset *ps);

/* Load a new plugin with DLL at path, passed arguments in args. */
void plugin_load(struct uct_pluginset *ps, char *path, char *args);

/* Query plugins for priors of a node's leaves. */
void plugin_prior(struct uct_pluginset *ps, tree_node_t *node, prior_map_t *map, int eqex);

#endif
